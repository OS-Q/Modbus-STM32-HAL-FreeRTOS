#ifndef _VENDOR_CONFIG_H_
#define _VENDOR_CONFIG_H_
#ifdef __cplusplus
extern "C" {
#endif
#include "main.h"
#include "usart.h"

#define     _USE_FREERTOS           (2)
#define     _USE_LOG                (1)
#define     _USE_RTC                (1)
#define     _DATA_IIC               hi2c1
#define     _DATA_KBIT              (32)
#define     _RTUS_UART              huart3
#define     _RTUH_UART              huart3

#ifdef __cplusplus
}
#endif
#endif
/*-------------------------(C) COPYRIGHT 2021 matismart ----------------------*/
