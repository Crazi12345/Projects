#include <iostream>
#include "serialib.h"
using namespace std;

int main()
{
  serialib serial;
  if (serial.openDevice("/dev/ttyUSB0", 9600)!=1) {
      cout <<"Please connect your usb device in the given port :)"<<endl<<endl;
      return 1;
    }
int c= 0;
  while (1){

    cin>>c;
serial.writeBytes(&c,1);

}
  return 0;
}
