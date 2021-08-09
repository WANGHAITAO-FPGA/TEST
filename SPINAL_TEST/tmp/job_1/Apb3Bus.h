#define APB3_M_REG0 = 0x0


typedef union{
    uint32_t val;
    struct{
        uint32_t Apb3_reg0:32;
    } reg;
} apb3_m_reg0_t