#define APB3_M_REG0 = 0x0
#define APB3_M_REG1 = 0x4
#define APB3_M_REG2 = 0x1010
#define APB3_M_REG3 = 0x1014


typedef union{
    uint32_t val;
    struct{
        uint32_t Apb3_reg0:32;
    } reg;
} apb3_m_reg0_t

typedef union{
    uint32_t val;
    struct{
        uint32_t Apb3_reg1:32;
    } reg;
} apb3_m_reg1_t

typedef union{
    uint32_t val;
    struct{
        uint32_t Apb3_reg2:32;
    } reg;
} apb3_m_reg2_t

typedef union{
    uint32_t val;
    struct{
        uint32_t Apb3_reg3:32;
    } reg;
} apb3_m_reg3_t