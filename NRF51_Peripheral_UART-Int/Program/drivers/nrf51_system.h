/* #include "nrf51_system.h" */

#ifndef __NRF51_SYSTEM_H
#define __NRF51_SYSTEM_H

#include "nrf51.h"
#include "nrf51_delay.h"
#include "nrf51_conf.h"
/*====================================================================================================*/
/*====================================================================================================*/
#define _GPIO_SET(_PIN)   nrf_gpio_pin_set(_PIN)
#define _GPIO_RST(_PIN)   nrf_gpio_pin_clear(_PIN)
#define _GPIO_TOG(_PIN)   nrf_gpio_pin_toggle(_PIN)
#define _GPIO_READ(_PIN)  nrf_gpio_pin_read(_PIN)
/*====================================================================================================*/
/*====================================================================================================*/
#define U8_MAX  ((uint8_t)255)
#define S8_MAX  ((int8_t)127)
#define S8_MIN  ((int8_t)-128)
#define U16_MAX ((uint16_t)65535u)
#define S16_MAX ((int16_t)32767)
#define S16_MIN ((int16_t)-32768)
#define U32_MAX ((uint32_t)4294967295uL)
#define S32_MAX ((int32_t)2147483647)
#define S32_MIN ((int32_t)-2147483648)

#define Byte32(Type, Byte4, Byte3, Byte2, Byte1)  ((Type)((((uint8_t)(Byte4))<<24) | (((uint8_t)(Byte3))<<16) | (((uint8_t)(Byte2))<<8) | ((uint8_t)(Byte1))))
#define Byte32U16H(Byte32U16) ((uint16_t)( Byte32U16&0xFFFF0000)>>16)
#define Byte32U16L(Byte32U16) ((uint16_t)((Byte32U16&0x0000FFFF)))
#define Byte32U8_1(Byte32U8)  ((uint8_t)( Byte32U8&0x000000FF))
#define Byte32U8_2(Byte32U8)  ((uint8_t)((Byte32U8&0x0000FF00)>>8))
#define Byte32U8_3(Byte32U8)  ((uint8_t)((Byte32U8&0x00FF0000)>>16))
#define Byte32U8_4(Byte32U8)  ((uint8_t)((Byte32U8&0xFF000000)>>24))

#define Byte16(Type, ByteH, ByteL)  ((Type)((((uint16_t)(ByteH))<<8) | ((uint16_t)(ByteL))))
#define Byte16U8H(Byte32U8) ((uint8_t)( Byte32U8&0xFF00)>>8)
#define Byte16U8L(Byte32U8) ((uint8_t)((Byte32U8&0x00FF)))

#define Byte8H(ByteH) ((uint8_t)(((uint16_t)(ByteH))>>8))
#define Byte8L(ByteL) ((uint8_t)(ByteL))

#define NULL 0

typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;
typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;
/*====================================================================================================*/
/*====================================================================================================*/
#endif
