import spinal.core.{SFix, _}

class pre_cir_cordic extends Component {
  val io = new Bundle{
    val data_in = in Bits(17 bits)
    val alpha = out Bits(17 bits)
    val flag = out UInt(2 bits)
  }
  noIoPrefix()

  val compare_data = Reg(SFix(peak = 2 exp, resolution = -14 exp))
  compare_data :=  Math.PI/2

  val zero = Reg(SFix(peak = 2 exp, resolution = -14 exp))
  zero := 0

  val input_data = Reg(SFix(peak = 2 exp, resolution = -14 exp))
  input_data.raw := io.data_in.asSInt

  val temp = Reg(SFix(peak = 2 exp, resolution = -14 exp))

  val Pi_data = Reg(SFix(peak = 2 exp, resolution = -14 exp))
  Pi_data := Math.PI

  val NgPi_data = Reg(SFix(peak = 2 exp, resolution = -14 exp))
  NgPi_data := -Math.PI

  val flag_temp = Reg(UInt(2 bits))

  when(input_data > compare_data){
    temp := Pi_data- input_data
    flag_temp := 2
  }elsewhen(input_data < zero - compare_data){
    temp := NgPi_data - input_data
    flag_temp := 3
  }otherwise{
    temp := input_data
    flag_temp := 0
  }
  io.alpha := temp.asBits
  io.flag := flag_temp
}

class cir_cordic_calculate extends Component{
  val io = new Bundle{
    val alpha_in = in Bits(17 bits)
    val flag_in = in UInt(2 bits)
    val flag_out = out UInt(2 bits)
    val my_sin = out SFix(peak = 1 exp,resolution = -14 exp)
    val my_cos = out SFix(peak = 1 exp,resolution = -14 exp)
  }
  noIoPrefix()

  val Xi_temp = Reg(Vec(SFix(peak = 1 exp,resolution = -14 exp),15))
  val Yi_temp = Reg(Vec(SFix(peak = 1 exp,resolution = -14 exp),15))
  val Zi_temp = Reg(Vec(SFix(peak = 2 exp,resolution = -14 exp),15))
  val flag_temp = Reg(Vec(UInt(2 bits),15))

  Xi_temp(0) := 0.607252935
  Yi_temp(0) := 0
  Zi_temp(0).raw := io.alpha_in.asSInt
  flag_temp(0) := io.flag_in

  val myarctan = Vec(SFix(peak = 2 exp,resolution = -14 exp),15)
  myarctan(0) := 0.7853981
  myarctan(1) := 0.4636476
  myarctan(2) := 0.2449787
  myarctan(3) := 0.1243549
  myarctan(4) := 0.0624188
  myarctan(5) := 0.0312398
  myarctan(6) := 0.0156237
  myarctan(7) := 0.0078123
  myarctan(8) := 0.0039062
  myarctan(9) := 0.0019531
  myarctan(10) := 0.0009765
  myarctan(11) := 0.0004883
  myarctan(12) := 0.0002441
  myarctan(13) := 0.0001221
  myarctan(14) := 0.0000610

  for(i <- 0 until 14){
    when(Zi_temp(i) >= 0){
      Xi_temp(i +1) := (Xi_temp(i) - (Yi_temp(i)>>i)).truncated
      Yi_temp(i +1) := (Yi_temp(i)+ (Xi_temp(i)>>i)).truncated
      Zi_temp(i +1) := Zi_temp(i) - myarctan(i)
    }otherwise{
      Xi_temp(i +1) := (Xi_temp(i) + (Yi_temp(i)>>i)).truncated
      Yi_temp(i +1) := (Yi_temp(i) - (Xi_temp(i)>>i)).truncated
      Zi_temp(i +1) := Zi_temp(i) + myarctan(i)
    }
    flag_temp(i+1) := flag_temp(i)
  }

  io.my_sin := Yi_temp(14)
  io.my_cos := Xi_temp(14)
  io.flag_out := flag_temp(14)
}


class post_cir_cordic extends Component{
  val io = new Bundle{
    val data_in = in Bits(17 bits)
    val sin_out = out Bits(16 bits)
    val cos_out = out Bits(16 bits)
  }
  noIoPrefix()

  val pre_cir_cordic = new pre_cir_cordic

  pre_cir_cordic.io.data_in := io.data_in

  val cir_cordic_calculate = new cir_cordic_calculate

  cir_cordic_calculate.io.alpha_in := pre_cir_cordic.io.alpha
  cir_cordic_calculate.io.flag_in := pre_cir_cordic.io.flag

  val sin_temp = Reg(SFix(peak = 1 exp,resolution = -14 exp))
  val cos_temp = Reg(SFix(peak = 1 exp,resolution = -14 exp))

  val zero = SFix(peak = 1 exp,resolution = -14 exp)

  zero := 0

  switch(cir_cordic_calculate.io.flag_out){
    is(2){
      sin_temp := cir_cordic_calculate.io.my_sin
      cos_temp := zero - cir_cordic_calculate.io.my_cos
    }
    is(3){
      sin_temp := cir_cordic_calculate.io.my_sin
      cos_temp := zero - cir_cordic_calculate.io.my_cos
    }
    default{
      sin_temp := cir_cordic_calculate.io.my_sin
      cos_temp := cir_cordic_calculate.io.my_cos
    }
  }
  io.sin_out := sin_temp.asBits
  io.cos_out := cos_temp.asBits

}


object cordicMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new post_cir_cordic)
}