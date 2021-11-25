
#ifndef _MODBUS_MODBUSCONFIG_H_
#define _MODBUS_MODBUSCONFIG_H_

#define ENABLE_TCP          0
#define ENABLE_USB_CDC      0
#define ENABLE_USART_DMA    1

#define T35                 5           // Timer T35 period (in ticks) for end frame detection.
#define MAX_BUFFER          256         // Maximum size for the communication buffer in bytes.
#define TIMEOUT_MODBUS      500         // Timeout for master query (in ticks)
#define MAX_M_HANDLERS      6           // Maximum number of modbus handlers that can work concurrently
#define MAX_TELEGRAMS       4           // Max number of Telegrams in master queue


#endif
