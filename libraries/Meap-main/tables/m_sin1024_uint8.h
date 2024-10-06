#ifndef m_sin1024_uint_H_
#define m_sin1024_uint_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define m_sin1024_uint_NUM_CELLS 1024
#define m_sin1024_uint_SAMPLERATE 1024
 
CONSTTABLE_STORAGE(uint8_t) m_sin1024_uint_DATA [] = {0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6, 6, 7, 8, 8, 9, 9,
10, 10, 11, 12, 12, 13, 14, 15, 15, 16, 17, 18, 19, 19, 20, 21, 22, 23, 24, 25,
26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46,
48, 49, 50, 51, 53, 54, 55, 56, 58, 59, 60, 62, 63, 64, 66, 67, 69, 70, 71, 73,
74, 76, 77, 79, 80, 81, 83, 84, 86, 87, 89, 90, 92, 93, 95, 96, 98, 99, 101,
103, 104, 106, 107, 109, 110, 112, 113, 115, 117, 118, 120, 121, 123, 124, 126,
127, 129, 131, 132, 134, 135, 137, 138, 140, 142, 143, 145, 146, 148, 149, 151,
152, 154, 156, 157, 159, 160, 162, 163, 165, 166, 168, 169, 171, 172, 174, 175,
176, 178, 179, 181, 182, 184, 185, 186, 188, 189, 191, 192, 193, 195, 196, 197,
199, 200, 201, 202, 204, 205, 206, 207, 209, 210, 211, 212, 213, 215, 216, 217,
218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233,
234, 235, 236, 236, 237, 238, 239, 240, 240, 241, 242, 243, 243, 244, 245, 245,
246, 246, 247, 247, 248, 249, 249, 250, 250, 250, 251, 251, 252, 252, 252, 253,
253, 253, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 254, 254, 254, 253,
253, 253, 252, 252, 252, 251, 251, 250, 250, 250, 249, 249, 248, 247, 247, 246,
246, 245, 245, 244, 243, 243, 242, 241, 240, 240, 239, 238, 237, 236, 236, 235,
234, 233, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219,
218, 217, 216, 215, 213, 212, 211, 210, 209, 207, 206, 205, 204, 202, 201, 200,
199, 197, 196, 195, 193, 192, 191, 189, 188, 186, 185, 184, 182, 181, 179, 178,
176, 175, 174, 172, 171, 169, 168, 166, 165, 163, 162, 160, 159, 157, 156, 154,
152, 151, 149, 148, 146, 145, 143, 142, 140, 138, 137, 135, 134, 132, 131, 129,
127, 126, 124, 123, 121, 120, 118, 117, 115, 113, 112, 110, 109, 107, 106, 104,
103, 101, 99, 98, 96, 95, 93, 92, 90, 89, 87, 86, 84, 83, 81, 80, 79, 77, 76,
74, 73, 71, 70, 69, 67, 66, 64, 63, 62, 60, 59, 58, 56, 55, 54, 53, 51, 50, 49,
48, 46, 45, 44, 43, 42, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27,
26, 25, 24, 23, 22, 21, 20, 19, 19, 18, 17, 16, 15, 15, 14, 13, 12, 12, 11, 10,
10, 9, 9, 8, 8, 7, 6, 6, 5, 5, 5, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0,
 }; 
 
 #endif /* m_sin1024_uint_H_ */
