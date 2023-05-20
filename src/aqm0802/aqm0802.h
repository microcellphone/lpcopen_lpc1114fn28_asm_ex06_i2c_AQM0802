#ifndef __AQM0802_H__
#define __AQM0802_H__

#include "chip.h"

//=============
// Prototypes
//=============
//
void AQM0802_Config_Request(void);
int AQM0802_cleardisplay(void);
int AQM0802_setcursor(int , int);
int AQM0802_putc( char c );
int AQM0802_puts( char * );
int AQM0802_init( int );
int AQM0802_deinit(void);

#endif // __GPSRTC_H__

//=========================================================
// End of Program
//=========================================================
