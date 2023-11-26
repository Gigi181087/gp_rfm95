#ifndef __GP_RFM95_H_
#define __GP_RFM95_H_#

#include <stdint.h>

//errorcodes
#define GP_RFM95_ERRORS_NOERROR      0

typedef struct gp_rfm95 gp_rfm95_t;

uint8_t gp_rfm95_init(gp_rfm95_t**);



#endif // __GP_RFM95_H_
