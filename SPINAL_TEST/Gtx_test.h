#define M_REG0 = 0x0
#define M_REG1 = 0x4
#define M_REG2 = 0x10
#define M_REG3 = 0x14


typedef union{
    uint32_t val;
    struct{
        uint32_t reg0:32;
    } reg;
} m_reg0_t

typedef union{
    uint32_t val;
    struct{
        uint32_t reg1:32;
    } reg;
} m_reg1_t

typedef union{
    uint32_t val;
    struct{
        uint32_t reg2:32;
    } reg;
} m_reg2_t

typedef union{
    uint32_t val;
    struct{
        uint32_t reg3:32;
    } reg;
} m_reg3_t