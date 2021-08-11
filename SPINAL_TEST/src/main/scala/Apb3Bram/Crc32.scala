package Apb3Bram

import GTX_TEST.Gtx_test
import spinal.core
import spinal.core.internals.Operator
import spinal.core.{BitCount, _}

object Crc32{
  def crc32(crc_i: Bits,data_i: Bits): Bits = {
    val crc = new Crc32
    crc.crc_i := crc_i
    crc.data_i := data_i
    val ret = cloneOf(crc.crc_o)
    ret := crc.crc_o
    return ret
  }
}


class Crc32 extends Component {
  val crc_i = in Bits(32 bits)
  val data_i = in Bits(32 bits)
  val crc_o = out Bits(32 bits)
  noIoPrefix()
  crc_o(0) := data_i(31) ^ data_i(30) ^ data_i(29) ^ data_i(28) ^ data_i(26) ^ data_i(25) ^ data_i(24) ^ data_i(16) ^ data_i(12) ^ data_i(10) ^ data_i(9) ^ data_i(6) ^ data_i(0) ^ crc_i(0) ^ crc_i(6) ^ crc_i(9) ^ crc_i(10) ^ crc_i(12) ^ crc_i(16) ^ crc_i(24) ^ crc_i(25) ^ crc_i(26) ^ crc_i(28) ^ crc_i(29) ^ crc_i(30) ^ crc_i(31)
  crc_o(1) := data_i(28) ^ data_i(27) ^ data_i(24) ^ data_i(17) ^ data_i(16) ^ data_i(13) ^ data_i(12) ^ data_i(11) ^ data_i(9) ^ data_i(7) ^ data_i(6) ^ data_i(1) ^ data_i(0) ^ crc_i(0) ^ crc_i(1) ^ crc_i(6) ^ crc_i(7) ^ crc_i(9) ^ crc_i(11) ^ crc_i(12) ^ crc_i(13) ^ crc_i(16) ^ crc_i(17) ^ crc_i(24) ^ crc_i(27) ^ crc_i(28)
  crc_o(2) := data_i(31) ^ data_i(30) ^ data_i(26) ^ data_i(24) ^ data_i(18) ^ data_i(17) ^ data_i(16) ^ data_i(14) ^ data_i(13) ^ data_i(9) ^ data_i(8) ^ data_i(7) ^ data_i(6) ^ data_i(2) ^ data_i(1) ^ data_i(0) ^ crc_i(0) ^ crc_i(1) ^ crc_i(2) ^ crc_i(6) ^ crc_i(7) ^ crc_i(8) ^ crc_i(9) ^ crc_i(13) ^ crc_i(14) ^ crc_i(16) ^ crc_i(17) ^ crc_i(18) ^ crc_i(24) ^ crc_i(26) ^ crc_i(30) ^ crc_i(31)
  crc_o(3) := data_i(31) ^ data_i(27) ^ data_i(25) ^ data_i(19) ^ data_i(18) ^ data_i(17) ^ data_i(15) ^ data_i(14) ^ data_i(10) ^ data_i(9) ^ data_i(8) ^ data_i(7) ^ data_i(3) ^ data_i(2) ^ data_i(1) ^ crc_i(1) ^ crc_i(2) ^ crc_i(3) ^ crc_i(7) ^ crc_i(8) ^ crc_i(9) ^ crc_i(10) ^ crc_i(14) ^ crc_i(15) ^ crc_i(17) ^ crc_i(18) ^ crc_i(19) ^ crc_i(25) ^ crc_i(27) ^ crc_i(31)
  crc_o(4) := data_i(31) ^ data_i(30) ^ data_i(29) ^ data_i(25) ^ data_i(24) ^ data_i(20) ^ data_i(19) ^ data_i(18) ^ data_i(15) ^ data_i(12) ^ data_i(11) ^ data_i(8) ^ data_i(6) ^ data_i(4) ^ data_i(3) ^ data_i(2) ^ data_i(0) ^ crc_i(0) ^ crc_i(2) ^ crc_i(3) ^ crc_i(4) ^ crc_i(6) ^ crc_i(8) ^ crc_i(11) ^ crc_i(12) ^ crc_i(15) ^ crc_i(18) ^ crc_i(19) ^ crc_i(20) ^ crc_i(24) ^ crc_i(25) ^ crc_i(29) ^ crc_i(30) ^ crc_i(31)
  crc_o(5) := data_i(29) ^ data_i(28) ^ data_i(24) ^ data_i(21) ^ data_i(20) ^ data_i(19) ^ data_i(13) ^ data_i(10) ^ data_i(7) ^ data_i(6) ^ data_i(5) ^ data_i(4) ^ data_i(3) ^ data_i(1) ^ data_i(0) ^ crc_i(0) ^ crc_i(1) ^ crc_i(3) ^ crc_i(4) ^ crc_i(5) ^ crc_i(6) ^ crc_i(7) ^ crc_i(10) ^ crc_i(13) ^ crc_i(19) ^ crc_i(20) ^ crc_i(21) ^ crc_i(24) ^ crc_i(28) ^ crc_i(29)
  crc_o(6) := data_i(30) ^ data_i(29) ^ data_i(25) ^ data_i(22) ^ data_i(21) ^ data_i(20) ^ data_i(14) ^ data_i(11) ^ data_i(8) ^ data_i(7) ^ data_i(6) ^ data_i(5) ^ data_i(4) ^ data_i(2) ^ data_i(1) ^ crc_i(1) ^ crc_i(2) ^ crc_i(4) ^ crc_i(5) ^ crc_i(6) ^ crc_i(7) ^ crc_i(8) ^ crc_i(11) ^ crc_i(14) ^ crc_i(20) ^ crc_i(21) ^ crc_i(22) ^ crc_i(25) ^ crc_i(29) ^ crc_i(30)
  crc_o(7) := data_i(29) ^ data_i(28) ^ data_i(25) ^ data_i(24) ^ data_i(23) ^ data_i(22) ^ data_i(21) ^ data_i(16) ^ data_i(15) ^ data_i(10) ^ data_i(8) ^ data_i(7) ^ data_i(5) ^ data_i(3) ^ data_i(2) ^ data_i(0) ^ crc_i(0) ^ crc_i(2) ^ crc_i(3) ^ crc_i(5) ^ crc_i(7) ^ crc_i(8) ^ crc_i(10) ^ crc_i(15) ^ crc_i(16) ^ crc_i(21) ^ crc_i(22) ^ crc_i(23) ^ crc_i(24) ^ crc_i(25) ^ crc_i(28) ^ crc_i(29)
  crc_o(8) := data_i(31) ^ data_i(28) ^ data_i(23) ^ data_i(22) ^ data_i(17) ^ data_i(12) ^ data_i(11) ^ data_i(10) ^ data_i(8) ^ data_i(4) ^ data_i(3) ^ data_i(1) ^ data_i(0) ^ crc_i(0) ^ crc_i(1) ^ crc_i(3) ^ crc_i(4) ^ crc_i(8) ^ crc_i(10) ^ crc_i(11) ^ crc_i(12) ^ crc_i(17) ^ crc_i(22) ^ crc_i(23) ^ crc_i(28) ^ crc_i(31)
  crc_o(9) := data_i(29) ^ data_i(24) ^ data_i(23) ^ data_i(18) ^ data_i(13) ^ data_i(12) ^ data_i(11) ^ data_i(9) ^ data_i(5) ^ data_i(4) ^ data_i(2) ^ data_i(1) ^ crc_i(1) ^ crc_i(2) ^ crc_i(4) ^ crc_i(5) ^ crc_i(9) ^ crc_i(11) ^ crc_i(12) ^ crc_i(13) ^ crc_i(18) ^ crc_i(23) ^ crc_i(24) ^ crc_i(29)
  crc_o(10) := data_i(31) ^ data_i(29) ^ data_i(28) ^ data_i(26) ^ data_i(19) ^ data_i(16) ^ data_i(14) ^ data_i(13) ^ data_i(9) ^ data_i(5) ^ data_i(3) ^ data_i(2) ^ data_i(0) ^ crc_i(0) ^ crc_i(2) ^ crc_i(3) ^ crc_i(5) ^ crc_i(9) ^ crc_i(13) ^ crc_i(14) ^ crc_i(16) ^ crc_i(19) ^ crc_i(26) ^ crc_i(28) ^ crc_i(29) ^ crc_i(31)
  crc_o(11) := data_i(31) ^ data_i(28) ^ data_i(27) ^ data_i(26) ^ data_i(25) ^ data_i(24) ^ data_i(20) ^ data_i(17) ^ data_i(16) ^ data_i(15) ^ data_i(14) ^ data_i(12) ^ data_i(9) ^ data_i(4) ^ data_i(3) ^ data_i(1) ^ data_i(0) ^ crc_i(0) ^ crc_i(1) ^ crc_i(3) ^ crc_i(4) ^ crc_i(9) ^ crc_i(12) ^ crc_i(14) ^ crc_i(15) ^ crc_i(16) ^ crc_i(17) ^ crc_i(20) ^ crc_i(24) ^ crc_i(25) ^ crc_i(26) ^ crc_i(27) ^ crc_i(28) ^ crc_i(31)
  crc_o(12) := data_i(31) ^ data_i(30) ^ data_i(27) ^ data_i(24) ^ data_i(21) ^ data_i(18) ^ data_i(17) ^ data_i(15) ^ data_i(13) ^ data_i(12) ^ data_i(9) ^ data_i(6) ^ data_i(5) ^ data_i(4) ^ data_i(2) ^ data_i(1) ^ data_i(0) ^ crc_i(0) ^ crc_i(1) ^ crc_i(2) ^ crc_i(4) ^ crc_i(5) ^ crc_i(6) ^ crc_i(9) ^ crc_i(12) ^ crc_i(13) ^ crc_i(15) ^ crc_i(17) ^ crc_i(18) ^ crc_i(21) ^ crc_i(24) ^ crc_i(27) ^ crc_i(30) ^ crc_i(31)
  crc_o(13) := data_i(31) ^ data_i(28) ^ data_i(25) ^ data_i(22) ^ data_i(19) ^ data_i(18) ^ data_i(16) ^ data_i(14) ^ data_i(13) ^ data_i(10) ^ data_i(7) ^ data_i(6) ^ data_i(5) ^ data_i(3) ^ data_i(2) ^ data_i(1) ^ crc_i(1) ^ crc_i(2) ^ crc_i(3) ^ crc_i(5) ^ crc_i(6) ^ crc_i(7) ^ crc_i(10) ^ crc_i(13) ^ crc_i(14) ^ crc_i(16) ^ crc_i(18) ^ crc_i(19) ^ crc_i(22) ^ crc_i(25) ^ crc_i(28) ^ crc_i(31)
  crc_o(14) := data_i(29) ^ data_i(26) ^ data_i(23) ^ data_i(20) ^ data_i(19) ^ data_i(17) ^ data_i(15) ^ data_i(14) ^ data_i(11) ^ data_i(8) ^ data_i(7) ^ data_i(6) ^ data_i(4) ^ data_i(3) ^ data_i(2) ^ crc_i(2) ^ crc_i(3) ^ crc_i(4) ^ crc_i(6) ^ crc_i(7) ^ crc_i(8) ^ crc_i(11) ^ crc_i(14) ^ crc_i(15) ^ crc_i(17) ^ crc_i(19) ^ crc_i(20) ^ crc_i(23) ^ crc_i(26) ^ crc_i(29)
  crc_o(15) := data_i(30) ^ data_i(27) ^ data_i(24) ^ data_i(21) ^ data_i(20) ^ data_i(18) ^ data_i(16) ^ data_i(15) ^ data_i(12) ^ data_i(9) ^ data_i(8) ^ data_i(7) ^ data_i(5) ^ data_i(4) ^ data_i(3) ^ crc_i(3) ^ crc_i(4) ^ crc_i(5) ^ crc_i(7) ^ crc_i(8) ^ crc_i(9) ^ crc_i(12) ^ crc_i(15) ^ crc_i(16) ^ crc_i(18) ^ crc_i(20) ^ crc_i(21) ^ crc_i(24) ^ crc_i(27) ^ crc_i(30)
  crc_o(16) := data_i(30) ^ data_i(29) ^ data_i(26) ^ data_i(24) ^ data_i(22) ^ data_i(21) ^ data_i(19) ^ data_i(17) ^ data_i(13) ^ data_i(12) ^ data_i(8) ^ data_i(5) ^ data_i(4) ^ data_i(0) ^ crc_i(0) ^ crc_i(4) ^ crc_i(5) ^ crc_i(8) ^ crc_i(12) ^ crc_i(13) ^ crc_i(17) ^ crc_i(19) ^ crc_i(21) ^ crc_i(22) ^ crc_i(24) ^ crc_i(26) ^ crc_i(29) ^ crc_i(30)
  crc_o(17) := data_i(31) ^ data_i(30) ^ data_i(27) ^ data_i(25) ^ data_i(23) ^ data_i(22) ^ data_i(20) ^ data_i(18) ^ data_i(14) ^ data_i(13) ^ data_i(9) ^ data_i(6) ^ data_i(5) ^ data_i(1) ^ crc_i(1) ^ crc_i(5) ^ crc_i(6) ^ crc_i(9) ^ crc_i(13) ^ crc_i(14) ^ crc_i(18) ^ crc_i(20) ^ crc_i(22) ^ crc_i(23) ^ crc_i(25) ^ crc_i(27) ^ crc_i(30) ^ crc_i(31)
  crc_o(18) := data_i(31) ^ data_i(28) ^ data_i(26) ^ data_i(24) ^ data_i(23) ^ data_i(21) ^ data_i(19) ^ data_i(15) ^ data_i(14) ^ data_i(10) ^ data_i(7) ^ data_i(6) ^ data_i(2) ^ crc_i(2) ^ crc_i(6) ^ crc_i(7) ^ crc_i(10) ^ crc_i(14) ^ crc_i(15) ^ crc_i(19) ^ crc_i(21) ^ crc_i(23) ^ crc_i(24) ^ crc_i(26) ^ crc_i(28) ^ crc_i(31)
  crc_o(19) := data_i(29) ^ data_i(27) ^ data_i(25) ^ data_i(24) ^ data_i(22) ^ data_i(20) ^ data_i(16) ^ data_i(15) ^ data_i(11) ^ data_i(8) ^ data_i(7) ^ data_i(3) ^ crc_i(3) ^ crc_i(7) ^ crc_i(8) ^ crc_i(11) ^ crc_i(15) ^ crc_i(16) ^ crc_i(20) ^ crc_i(22) ^ crc_i(24) ^ crc_i(25) ^ crc_i(27) ^ crc_i(29)
  crc_o(20) := data_i(30) ^ data_i(28) ^ data_i(26) ^ data_i(25) ^ data_i(23) ^ data_i(21) ^ data_i(17) ^ data_i(16) ^ data_i(12) ^ data_i(9) ^ data_i(8) ^ data_i(4) ^ crc_i(4) ^ crc_i(8) ^ crc_i(9) ^ crc_i(12) ^ crc_i(16) ^ crc_i(17) ^ crc_i(21) ^ crc_i(23) ^ crc_i(25) ^ crc_i(26) ^ crc_i(28) ^ crc_i(30)
  crc_o(21) := data_i(31) ^ data_i(29) ^ data_i(27) ^ data_i(26) ^ data_i(24) ^ data_i(22) ^ data_i(18) ^ data_i(17) ^ data_i(13) ^ data_i(10) ^ data_i(9) ^ data_i(5) ^ crc_i(5) ^ crc_i(9) ^ crc_i(10) ^ crc_i(13) ^ crc_i(17) ^ crc_i(18) ^ crc_i(22) ^ crc_i(24) ^ crc_i(26) ^ crc_i(27) ^ crc_i(29) ^ crc_i(31)
  crc_o(22) := data_i(31) ^ data_i(29) ^ data_i(27) ^ data_i(26) ^ data_i(24) ^ data_i(23) ^ data_i(19) ^ data_i(18) ^ data_i(16) ^ data_i(14) ^ data_i(12) ^ data_i(11) ^ data_i(9) ^ data_i(0) ^ crc_i(0) ^ crc_i(9) ^ crc_i(11) ^ crc_i(12) ^ crc_i(14) ^ crc_i(16) ^ crc_i(18) ^ crc_i(19) ^ crc_i(23) ^ crc_i(24) ^ crc_i(26) ^ crc_i(27) ^ crc_i(29) ^ crc_i(31)
  crc_o(23) := data_i(31) ^ data_i(29) ^ data_i(27) ^ data_i(26) ^ data_i(20) ^ data_i(19) ^ data_i(17) ^ data_i(16) ^ data_i(15) ^ data_i(13) ^ data_i(9) ^ data_i(6) ^ data_i(1) ^ data_i(0) ^ crc_i(0) ^ crc_i(1) ^ crc_i(6) ^ crc_i(9) ^ crc_i(13) ^ crc_i(15) ^ crc_i(16) ^ crc_i(17) ^ crc_i(19) ^ crc_i(20) ^ crc_i(26) ^ crc_i(27) ^ crc_i(29) ^ crc_i(31)
  crc_o(24) := data_i(30) ^ data_i(28) ^ data_i(27) ^ data_i(21) ^ data_i(20) ^ data_i(18) ^ data_i(17) ^ data_i(16) ^ data_i(14) ^ data_i(10) ^ data_i(7) ^ data_i(2) ^ data_i(1) ^ crc_i(1) ^ crc_i(2) ^ crc_i(7) ^ crc_i(10) ^ crc_i(14) ^ crc_i(16) ^ crc_i(17) ^ crc_i(18) ^ crc_i(20) ^ crc_i(21) ^ crc_i(27) ^ crc_i(28) ^ crc_i(30)
  crc_o(25) := data_i(31) ^ data_i(29) ^ data_i(28) ^ data_i(22) ^ data_i(21) ^ data_i(19) ^ data_i(18) ^ data_i(17) ^ data_i(15) ^ data_i(11) ^ data_i(8) ^ data_i(3) ^ data_i(2) ^ crc_i(2) ^ crc_i(3) ^ crc_i(8) ^ crc_i(11) ^ crc_i(15) ^ crc_i(17) ^ crc_i(18) ^ crc_i(19) ^ crc_i(21) ^ crc_i(22) ^ crc_i(28) ^ crc_i(29) ^ crc_i(31)
  crc_o(26) := data_i(31) ^ data_i(28) ^ data_i(26) ^ data_i(25) ^ data_i(24) ^ data_i(23) ^ data_i(22) ^ data_i(20) ^ data_i(19) ^ data_i(18) ^ data_i(10) ^ data_i(6) ^ data_i(4) ^ data_i(3) ^ data_i(0) ^ crc_i(0) ^ crc_i(3) ^ crc_i(4) ^ crc_i(6) ^ crc_i(10) ^ crc_i(18) ^ crc_i(19) ^ crc_i(20) ^ crc_i(22) ^ crc_i(23) ^ crc_i(24) ^ crc_i(25) ^ crc_i(26) ^ crc_i(28) ^ crc_i(31)
  crc_o(27) := data_i(29) ^ data_i(27) ^ data_i(26) ^ data_i(25) ^ data_i(24) ^ data_i(23) ^ data_i(21) ^ data_i(20) ^ data_i(19) ^ data_i(11) ^ data_i(7) ^ data_i(5) ^ data_i(4) ^ data_i(1) ^ crc_i(1) ^ crc_i(4) ^ crc_i(5) ^ crc_i(7) ^ crc_i(11) ^ crc_i(19) ^ crc_i(20) ^ crc_i(21) ^ crc_i(23) ^ crc_i(24) ^ crc_i(25) ^ crc_i(26) ^ crc_i(27) ^ crc_i(29)
  crc_o(28) := data_i(30) ^ data_i(28) ^ data_i(27) ^ data_i(26) ^ data_i(25) ^ data_i(24) ^ data_i(22) ^ data_i(21) ^ data_i(20) ^ data_i(12) ^ data_i(8) ^ data_i(6) ^ data_i(5) ^ data_i(2) ^ crc_i(2) ^ crc_i(5) ^ crc_i(6) ^ crc_i(8) ^ crc_i(12) ^ crc_i(20) ^ crc_i(21) ^ crc_i(22) ^ crc_i(24) ^ crc_i(25) ^ crc_i(26) ^ crc_i(27) ^ crc_i(28) ^ crc_i(30)
  crc_o(29) := data_i(31) ^ data_i(29) ^ data_i(28) ^ data_i(27) ^ data_i(26) ^ data_i(25) ^ data_i(23) ^ data_i(22) ^ data_i(21) ^ data_i(13) ^ data_i(9) ^ data_i(7) ^ data_i(6) ^ data_i(3) ^ crc_i(3) ^ crc_i(6) ^ crc_i(7) ^ crc_i(9) ^ crc_i(13) ^ crc_i(21) ^ crc_i(22) ^ crc_i(23) ^ crc_i(25) ^ crc_i(26) ^ crc_i(27) ^ crc_i(28) ^ crc_i(29) ^ crc_i(31)
  crc_o(30) := data_i(30) ^ data_i(29) ^ data_i(28) ^ data_i(27) ^ data_i(26) ^ data_i(24) ^ data_i(23) ^ data_i(22) ^ data_i(14) ^ data_i(10) ^ data_i(8) ^ data_i(7) ^ data_i(4) ^ crc_i(4) ^ crc_i(7) ^ crc_i(8) ^ crc_i(10) ^ crc_i(14) ^ crc_i(22) ^ crc_i(23) ^ crc_i(24) ^ crc_i(26) ^ crc_i(27) ^ crc_i(28) ^ crc_i(29) ^ crc_i(30)
  crc_o(31) := data_i(31) ^ data_i(30) ^ data_i(29) ^ data_i(28) ^ data_i(27) ^ data_i(25) ^ data_i(24) ^ data_i(23) ^ data_i(15) ^ data_i(11) ^ data_i(9) ^ data_i(8) ^ data_i(5) ^ crc_i(5) ^ crc_i(8) ^ crc_i(9) ^ crc_i(11) ^ crc_i(15) ^ crc_i(23) ^ crc_i(24) ^ crc_i(25) ^ crc_i(27) ^ crc_i(28) ^ crc_i(29) ^ crc_i(30) ^ crc_i(31)

}
