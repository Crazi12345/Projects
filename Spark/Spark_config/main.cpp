#include <iostream>
#include "serialib.h"
using namespace std;

int main()
{
  serialib serial;

  if (serial.openDevice("/dev/ttyUSB0", 9600)!=1) {
      cout <<"Connection failed"<<endl<<endl;
      return 1;}

  for (int c=0;c<128;c++)
  {
      cin>>c; // used to send a controlled value to the board, remove if testing requires fast date transmission in bunches


     cout <<serial.readBytes()<<endl;




      usleep(10000);
  }

  // Close the serial device
  serial.closeDevice();
}



