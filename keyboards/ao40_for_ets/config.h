#pragma once


/* 以下设置来自 https://oshwhub.com/tanbang/zero-pad-modular-desktop-shortcut-keypad （by 碳棒）*/

/*开机后自动打开全键无冲模式*/
#define FORCE_NKRO
/*快速输入组合键优化*/
#define HOLD_ON_OTHER_KEY_PRESS

/*设置按键去抖延迟*/
#define DEBOUNCE 5
/*设置键码延迟*/
#define TAP_CODE_DELAY 0
/*设置矩阵延迟*/
#define MATRIX_IO_DELAY 0
/*旋钮防冲突延迟*/
#define ENCODER_MAP_KEY_DELAY 5
/*设置USB的最大功率，以毫安为单位*/
#define USB_MAX_POWER_CONSUMPTION 500
/*设置USB的轮询速率，以毫秒为单位*/
#define USB_POLLING_INTERVAL_MS 2
/*默认为0，如果键盘在休眠后没有正确唤醒，将其设置为200*/
#define USB_SUSPEND_WAKEUP_DELAY 0

/*激活双击RESET功能*/
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
/*双击时间间隔*/
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U

#define ENCODER_RESOLUTIONS { 4, 4 }     /*定义旋钮的脉冲数，要调整到每转动一格触发一次*/
#define ENCODER_DIRECTION_FLIP           /*如果旋钮的旋转方向反了，就启用此代码*/
#define ENCODER_DEFAULT_POS 0x3      /*如果编码器在改变方向时会失灵一下，就启用此代码*/