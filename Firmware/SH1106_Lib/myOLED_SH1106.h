/* 
 * File:   
 * Author:AdamSyu
 * Comments:
 * Revision history: 
 */

#ifndef _MYOLED_SH1106_H
#define _MYOLED_SH1106_H

#include "../mcc_generated_files/mcc.h"
#include "../mcc_generated_files/pin_manager.h"

#define SDA LATCbits.LATC1
#define SCL LATCbits.LATC2
#define SDA_Ack SDA_GetValue()

#define SH1106_ADD_Write 0x78

#define SH1106_Data 0x40
#define SH1106_Command 0x00

void I2C_Start(void);
void I2C_Stop(void);
bool SH1106_Write_1byte(uint8_t D);

void SH1106_Write_Command(uint8_t Command);
void SH1106_Write_Data(uint8_t Data);
void SH1106_Clear_Screen(uint8_t disp_data);
void SH1106_Display(void);
void SH1106_init(void);
void SH1106_Set_Pos(uint8_t x, uint8_t y);

#endif	/* _MYOLED_SH1106_H */
