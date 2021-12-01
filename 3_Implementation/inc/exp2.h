#ifndef _exp2_H__
#define __exp2_H__
/**
 * @brief Reading the analog input and returning a digital 8bit value
 *
 * @param ch
 * @return uint16_t
 */
uint16_t ReadADC(uint8_t ch);
void InitADC();
#endif
