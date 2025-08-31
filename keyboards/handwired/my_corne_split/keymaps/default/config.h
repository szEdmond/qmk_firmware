#pragma once

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT

#define MATRIX_COL_PINS_RIGHT { GP26, GP5,  GP2,  GP4, GP27, GP28 }
#define MATRIX_ROW_PINS_RIGHT { GP29, GP22, GP20,  GP23 }
#define SOFT_SERIAL_PIN GP21

// #include_next <mcuconf.h>
// #undef RP_I2C_USE_I2C1
// #define RP_I2C_USE_I2C1 TRUE
// #undef RP_I2C_USE_I2C0
// #define RP_I2C_USE_I2C0 FALSE
// #define HAL_USE_I2C TRUE
// #include_next <halconf.h>
// #undef I2C_DRIVER
// #undef I2C1_SCL_PIN
// #define I2C1_SCL_PIN GP15
// #undef I2C1_SDA_PIN
// #define I2C1_SDA_PIN GP14
#define OLED_DISPLAY_128X32
// #define OLED_DISPLAY_WIDTH 128
// #define OLED_DISPLAY_HEIGHT 32
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP14
#define I2C1_SCL_PIN GP15

//N-KeyRollover
#define FORCE_NKRO