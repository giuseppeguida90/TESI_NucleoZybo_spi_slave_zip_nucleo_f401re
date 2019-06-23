#include "mbed.h"
 
SPISlave device(SPI_MOSI, SPI_MISO, SPI_SCK, PA_15);
Serial pc(USBTX,USBRX,9600);
 
int main() {
    unsigned char msgRcv,msgSent;
    //device.frequency(1666666);
    device.format(8,3); //magari prova con mode 1
    while(1) {
        //if(device.receive()) {
           msgRcv = device.read();   // Read byte from master
           pc.printf("Messaggio letto:%x\n\r",msgRcv);
           //msgSent = 0xAA;     // Add one to it, modulo 256
           //device.reply(msgSent);         // Make this the next reply
       //}
       
    }
}
 