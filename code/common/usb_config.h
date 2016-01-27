
#include "ch.h"
#include "hal.h"
#include "common.h"
#include <string.h>

/*===========================================================================*/
/* USB related stuff.                                                        */
/*===========================================================================*/

/*
 * Endpoints to be used for USBD1.
 */
#define USBD1_DATA_REQUEST_EP           1
#define USBD1_DATA_AVAILABLE_EP         1
#define USBD1_INTERRUPT_REQUEST_EP      2

#define USBD2_DATA_REQUEST_EP           3
#define USBD2_DATA_AVAILABLE_EP         3
#define USBD2_INTERRUPT_REQUEST_EP      4

extern SerialUSBDriver SDU1;
extern SerialUSBDriver BDU1;
extern bool doKLineInit;

extern const USBConfig usbcfg;
extern const SerialUSBConfig serusbcfg;
extern const SerialUSBConfig bulkusbcfg;

extern SerialConfig uart1Cfg;
extern SerialConfig uart2Cfg;
extern SerialConfig uart3Cfg;

bool usbConnected(void);
bool usb_lld_connect_bus(USBDriver *usbp);
bool usb_lld_disconnect_bus(USBDriver *usbp);
