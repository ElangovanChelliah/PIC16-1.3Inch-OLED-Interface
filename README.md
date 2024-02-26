# PIC18-1.3Inch-OLED-Interface

This project demonstrates a simple hardware design for 1.3 inch monochrome OLED Module and  PIC16 Interface, the given schematics and can be integrated to any other OLED required projects like medical devices, gaming console, information display. The aim of the project is to design, develop and test the OLED functionality with PIC16F1615 combined with custom circuit design feasible for integration in OLED involved future projects.

### Softwares used
`Altium Designer` `MPLAB X IDE` `Proteus` `Tear Term` 
### Skills
`Circuit Design` `Schematic Capture` `PCB Layout` `Debugging & Testing` `Embedded C` `Embedded Product Development`

System Design:
<table>
  <tr>
    <th>Component</th>
    <th>Specification</th>
  </tr>
  <tr>
    <td>MCU</td>
    <td>PIC16F1615</td>
  </tr>
  <tr>
    <td>OLED</td>
    <td>1.3 Inch</td>
  </tr>
  <tr>
    <td>Driver</td>
    <td>SH1106</td>
  </tr>
    <tr>
    <td>Interface</td>
    <td>I2C</td>
  </tr>
  <tr>
    <td>Oscillator</td>
    <td>INTSOC</td>
  </tr>
    <tr>
    <td>Internal Clock</td>
    <td>16MhZ</td>
  </tr>
 </table>

### Hardware Design

The designed schematics uses a seperate 662K 3.3V voltage regulator for module testing, the integrated applications can use the same schematics connected to the common voltage source of 3.3V, Altium designer is used to layout the circuit. 

<img src="https://github.com/ElangovanChelliah/PIC16-1.3Inch-OLED-Interface/blob/7bf8ae4249119983b670ed0e5f937535a9344fe7/Schematics.png" width="600">

### Pin Diagram

//Example 1

# PIC-BLE-Based-Remote-Controller
A battery powered PIC18 &amp; BLE based remote controller used for wireless HMI. This project mainly created to control various applications wirelessly. 



//Example 2

Endless runner game developed for the AVR ATtiny10 microcontroller and a 128x32 monochrome OLED Display [here](http://www.bitbanging.space/posts/smallest-solar-powered-videogame).

//Example 3

### for Chain Symbol

//Example 4

`SSD1306-128x64_OLED.lib` 

//Example 5

Memory:
<table>
  <tr>
    <th>Modul</th>
    <th>Flash</th>
    <th>Static RAM</th>
  </tr>
  <tr>
    <td>I2C-Core</td>
    <td>220 Bytes</td>
    <td>0 Bytes</td>
  </tr>
  <tr>
    <td>FONT</td>
    <td>660 Bytes</td>
    <td>0 Bytes</td>
  </tr>
  <tr>
    <td>OLED (Text-Mode)</td>
    <td>1437 Bytes</td>
    <td>2 Bytes</td>
  </tr>
  <tr>
    <td>OLED (Graphic-Mode)</td>
    <td>2561 Bytes</td>
    <td>1026 Bytes</td>
  </tr>
 </table>


//Example 6

Example

```c
//****main.c****//
#include "lcd.h"


int main(void){
  lcd_init(LCD_DISP_ON);    // init lcd and turn on
  
  lcd_puts("Hello World");  // put string from RAM to display (TEXTMODE) or buffer (GRAPHICMODE)
  lcd_gotoxy(0,2);          // set cursor to first column at line 3
  lcd_puts_p(PSTR("String from flash"));  // puts string form flash to display (TEXTMODE) or buffer (GRAPHICMODE)
#if defined GRAPHICMODE
  lcd_drawCircle(64,32,7,WHITE); // draw circle to buffer
  lcd_display();                  // send buffer to display
#endif
  for(;;){
    //main loop
  }
  return 0;
}
```
//Example 7
Use this command (mind the paths of avrdude and its config file):
```
./avrdude -e -v -p attiny10 -C ./avrdude.conf -c usbasp -U flash:w:firmware.hex:i -P usb
```
```
./avrdude -e -v -p attiny10 -C ./avrdude.conf -c usbasp -U flash:w:firmware.hex:i -P usb
```
<div><img src="./assets/schematics.png" width=350px></div>
