#include <iostream>
#include <stdio.h>
#include "serialib.h"
using namespace std;

int
main()
{
  serialib serial;
  // open the usb port to send and recieve date, else return 1 and error message
  if (serial.openDevice("/dev/ttyUSB0", 115200)!=1) {
      cout <<"Please connect your usb device in the given port :)"<<endl<<endl;
      return 1;}

  /*cout << "input 1 for turning on the led "
          "\nany other number below 128, will turn the led off "
          "\nabove that will terminate the program"<<endl;*/
  char r;
                        unsigned long long test = 0;
                        int milestone = 0;
  while (true){
      char s=serial.readChar(&r);


      cout << s<<endl;








      string peter(1,r);
      try{
          cout <<stoi(peter)<<'\n';
      }catch(std::invalid_argument){
          test++;
        }

        if(test == 100){
            milestone++;
            cout << "Milestone reached: " << milestone << endl;
            test = 0;
        }



    }
  // Display ASCII characters (from 32 to 128)
  /*for (int c=0;c<128;c++)
  {
      cin>>c; // used to send a controlled value to the board, remove if testing requires fast date transmission in bunches


     // cout <<serial.readBytes(555)<<endl;


      serial.writeChar(c);

      usleep(10000);
  }*/


  // Close the serial device
  serial.closeDevice();
}
