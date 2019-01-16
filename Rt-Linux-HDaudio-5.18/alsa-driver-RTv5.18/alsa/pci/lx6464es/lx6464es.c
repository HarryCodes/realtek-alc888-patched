#include "adriver.h"
#include <linux/pci_ids.h>
#ifndef PCI_DEVICE_ID_PLX_9056
#define PCI_DEVICE_ID_PLX_9056		0x9056
#endif
#ifndef PCI_VENDOR_ID_DIGIGRAM
#define PCI_VENDOR_ID_DIGIGRAM		0x1369
#endif
#ifndef PCI_SUBDEVICE_ID_DIGIGRAM_LX6464ES_SERIAL_SUBSYSTEM
#define PCI_SUBDEVICE_ID_DIGIGRAM_LX6464ES_SERIAL_SUBSYSTEM	0xc001
#define PCI_SUBDEVICE_ID_DIGIGRAM_LX6464ES_CAE_SERIAL_SUBSYSTEM	0xc002
#endif
#include "../../alsa-kernel/pci/lx6464es/lx6464es.c"
EXPORT_NO_SYMBOLS;
