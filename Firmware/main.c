/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1615
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/pin_manager.h"
#include "SH1106_Lib/myOLED_SH1106.h"


void One(void);
void Two(void);

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    __delay_ms(500);
    
    SH1106_init();
    SH1106_Clear_Screen(0x00);
    SH1106_Display();
//2__delay_ms(500);
//    SH1106_Clear_Screen(0x00);
//    One();
//    __delay_ms(500);
//    SH1106_Clear_Screen(0x00);
//    Two();
    

    
    
    
    
    
    
    while (1)
    {
        
    }
}


void One(){
    SH1106_Clear_Screen(0x00);
    /*
    SH1106_Set_Pos(0, 0);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFE);
    SH1106_Write_Data(0x92);
    SH1106_Write_Data(0x92);
    SH1106_Write_Data(0x92);
    SH1106_Write_Data(0x6C);
    SH1106_Write_Data(0x00);
    */
    SH1106_Set_Pos(90, 0);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xC0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Set_Pos(90, 1);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xFE);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Set_Pos(90, 2);
    SH1106_Write_Data(0x18);
    SH1106_Write_Data(0x1F);
    SH1106_Write_Data(0x1F);
    SH1106_Write_Data(0x1F);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Set_Pos(90, 3);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 4);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 5);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 6);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 7);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);

}

void Two(){
    SH1106_Clear_Screen(0x00);

        SH1106_Set_Pos(83, 0);
    SH1106_Write_Data(0xC0);
    SH1106_Write_Data(0xE0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
        SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
        SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xF0);
    SH1106_Write_Data(0xE0);
    SH1106_Write_Data(0x80);
        SH1106_Set_Pos(83, 1);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFE);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0x07);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 2);
    SH1106_Write_Data(0x18);
    SH1106_Write_Data(0x1F);
    SH1106_Write_Data(0x1F);
    SH1106_Write_Data(0x1F);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 3);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 4);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 5);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 6);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
        SH1106_Set_Pos(90, 7);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0x00);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);
    SH1106_Write_Data(0xFF);

}

/**
 End of File
*/