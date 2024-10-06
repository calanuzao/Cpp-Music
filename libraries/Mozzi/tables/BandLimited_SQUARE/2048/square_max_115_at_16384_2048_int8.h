#ifndef SQUARE_MAX_115_AT_16384_2048INT8_H_
#define SQUARE_MAX_115_AT_16384_2048INT8_H_

#include <Arduino.h>
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_115_AT_16384_2048_NUM_CELLS 2048
#define SQUARE_MAX_115_AT_16384_2048_SAMPLERATE 2048

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_115_AT_16384_2048_DATA [] = 
{
0, 15, 30, 44, 58, 71, 82, 93, 102, 110, 116, 121, 124, 126, 127, 127, 125, 123, 121, 118, 115, 111, 108, 105, 103, 100, 99, 98, 97, 97, 98, 99, 100, 
102, 104, 106, 107, 109, 111, 112, 114, 114, 115, 115, 115, 114, 113, 112, 111, 109, 108, 107, 105, 104, 103, 103, 102, 102, 102, 103, 103, 104, 105, 106, 107, 
108, 109, 110, 111, 112, 112, 112, 112, 112, 111, 111, 110, 109, 108, 107, 106, 106, 105, 104, 104, 104, 104, 104, 105, 105, 106, 106, 107, 108, 109, 109, 110, 
110, 111, 111, 111, 111, 110, 110, 109, 109, 108, 108, 107, 106, 106, 105, 105, 105, 105, 105, 105, 106, 106, 106, 107, 108, 108, 109, 109, 110, 110, 110, 110, 
110, 110, 110, 109, 109, 108, 108, 107, 107, 106, 106, 106, 105, 105, 105, 106, 106, 106, 107, 107, 107, 108, 108, 109, 109, 109, 110, 110, 110, 110, 109, 109, 
109, 108, 108, 108, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 
107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 
106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 
106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 107, 107, 
107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 106, 107, 107, 107, 107, 107, 107, 108, 
108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 
109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 
109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 108, 
108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 
107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 108, 107, 107, 107, 
107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 
107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 
107, 107, 108, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 
108, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 
109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 
109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 108, 
108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 
107, 107, 107, 107, 107, 107, 106, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 
107, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 
106, 106, 107, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 107, 
107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 108, 
108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 108, 108, 108, 109, 109, 
109, 110, 110, 110, 110, 109, 109, 109, 108, 108, 107, 107, 107, 106, 106, 106, 105, 105, 105, 106, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 110, 110, 
110, 110, 110, 109, 109, 108, 108, 107, 106, 106, 106, 105, 105, 105, 105, 105, 105, 106, 106, 107, 108, 108, 109, 109, 110, 110, 111, 111, 111, 111, 110, 110, 
109, 109, 108, 107, 106, 106, 105, 105, 104, 104, 104, 104, 104, 105, 106, 106, 107, 108, 109, 110, 111, 111, 112, 112, 112, 112, 112, 111, 110, 109, 108, 107, 
106, 105, 104, 103, 103, 102, 102, 102, 103, 103, 104, 105, 107, 108, 109, 111, 112, 113, 114, 115, 115, 115, 114, 114, 112, 111, 109, 107, 106, 104, 102, 100, 
99, 98, 97, 97, 98, 99, 100, 103, 105, 108, 111, 115, 118, 121, 123, 125, 127, 127, 126, 124, 121, 116, 110, 102, 93, 82, 71, 58, 44, 30, 15, 0, 
-15, -30, -44, -58, -71, -82, -93, -102, -110, -116, -121, -124, -126, -127, -127, -125, -123, -121, -118, -115, -111, -108, -105, -103, -100, -99, -98, -97, -97, -98, -99, -100, 
-102, -104, -106, -107, -109, -111, -112, -114, -114, -115, -115, -115, -114, -113, -112, -111, -109, -108, -107, -105, -104, -103, -103, -102, -102, -102, -103, -103, -104, -105, -106, -107, 
-108, -109, -110, -111, -112, -112, -112, -112, -112, -111, -111, -110, -109, -108, -107, -106, -106, -105, -104, -104, -104, -104, -104, -105, -105, -106, -106, -107, -108, -109, -109, -110, 
-110, -111, -111, -111, -111, -110, -110, -109, -109, -108, -108, -107, -106, -106, -105, -105, -105, -105, -105, -105, -106, -106, -106, -107, -108, -108, -109, -109, -110, -110, -110, -110, 
-110, -110, -110, -109, -109, -108, -108, -107, -107, -106, -106, -106, -105, -105, -105, -106, -106, -106, -107, -107, -107, -108, -108, -109, -109, -109, -110, -110, -110, -110, -109, -109, 
-109, -108, -108, -108, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, 
-107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, 
-106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, 
-106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -107, -107, 
-107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -106, -107, -107, -107, -107, -107, -107, -108, 
-108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, 
-109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, 
-109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -108, 
-108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, 
-107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -108, -107, -107, -107, 
-107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, 
-107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, 
-107, -107, -108, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, 
-108, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, 
-109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, 
-109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -108, 
-108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, 
-107, -107, -107, -107, -107, -107, -106, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, 
-107, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, 
-106, -106, -107, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -107, 
-107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -108, 
-108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -108, -108, -108, -109, -109, 
-109, -110, -110, -110, -110, -109, -109, -109, -108, -108, -107, -107, -107, -106, -106, -106, -105, -105, -105, -106, -106, -106, -107, -107, -108, -108, -109, -109, -110, -110, -110, -110, 
-110, -110, -110, -109, -109, -108, -108, -107, -106, -106, -106, -105, -105, -105, -105, -105, -105, -106, -106, -107, -108, -108, -109, -109, -110, -110, -111, -111, -111, -111, -110, -110, 
-109, -109, -108, -107, -106, -106, -105, -105, -104, -104, -104, -104, -104, -105, -106, -106, -107, -108, -109, -110, -111, -111, -112, -112, -112, -112, -112, -111, -110, -109, -108, -107, 
-106, -105, -104, -103, -103, -102, -102, -102, -103, -103, -104, -105, -107, -108, -109, -111, -112, -113, -114, -115, -115, -115, -114, -114, -112, -111, -109, -107, -106, -104, -102, -100, 
-99, -98, -97, -97, -98, -99, -100, -103, -105, -108, -111, -115, -118, -121, -123, -125, -127, -127, -126, -124, -121, -116, -110, -102, -93, -82, -71, -58, -44, -30, -15, 
 };

#endif