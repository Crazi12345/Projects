#include <iostream>
#include <stdio.h>
#include "serialib.h"
using namespace std;

int
main()
{
  serialib serial;
  // open the usb port to send and recieve date, else return 1 and error message
  if (serial.openDevice("/dev/ttyUSB1", 9600)!=1) {
      cout <<"Please connect your usb device in the given port :)"<<endl<<endl;
      return 1;}


  cout << "input 1 for turning on the led "
          "\nany other number below 128, will turn the led off "
          "\nabove that will terminate the program"<<endl;
  // Display ASCII characters (from 32 to 128)
  for (int c=0;c<128;c++)
  {
      cin>>c; // used to send a controlled value to the board, remove if testing requires fast date transmission in bunches


     // cout <<serial.readBytes(555)<<endl;


      serial.writeChar(c);

      usleep(10000);
  }

  // Close the serial device
  serial.closeDevice();
}
