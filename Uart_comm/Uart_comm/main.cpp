#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "serialib.h"
#include <vector>
using namespace std;
int binToHex(vector<int> bin){
  int hex;

  return hex;
}

int binToDec(vector<int> bin){
  int num = 1;
  int sum =0;
  for (int i = 0; i<8;i++){
     // cout<<bin.at(i)<<" ";
      sum=bin.at(i)*num+sum;
     // cout << sum<<endl;
      num = num+num;
    }
  return sum;
}

void print_vec(vector<int> vec){
  for(int i = 1; i<vec.size()+1;i++){
      if(i%4==0){
         // cout << " ";
        }
      cout << vec.at(vec.size()-i);

    }
  cout << endl;
}
vector<int> binary_vec(int num){
  vector<int> bin;
  while(num>0){
  bin.push_back(num%2);
  num = num/2;
    }
  return bin;
}


int main()
{
  serialib serial;
  serialib serial_write;
  //open the usb port to send and recieve date, else return 1 and error message
  if (serial.openDevice("/dev/ttyUSB0", 9600)!=1) {
      cout <<"Please connect your usb device in the given port :)"<<endl<<endl;
      return 1;
    }
 /* if (serial_write.openDevice("/dev/ttyACM0", 115200)!=1) {
      cout <<"Please connect your usb device in the given port2 :)"<<endl<<endl;
      return 1;
    }
*/

  /*cout << "input 1 for turning on the led "
          "\nany other number below 128, will turn the led off "
          "\nabove that will terminate the program"<<endl;*/
  char r;
                        unsigned long long test = 0;
                        int milestone = 0;
                        int b = 5;
                        bool byteRead = false;
                        int num=0;
                        int c;
  while (true){

      serial.readBytes(&b,1);
   //  serial.readChar(&r);
     if(b!=0){
        system("clear");
       cout <<"Raw Read Value: " <<b<<endl;
      if(b>128){
       cout <<"Binary Value: ";print_vec(binary_vec(b));
       cout <<"Decimal Value: "<<binToDec(binary_vec(b))<<endl;
}
      num++;}
usleep(10000);
     // cin>>c;
//serial_write.writeBytes(&c,1);
/*
       usleep(10000);
       byteRead = true;


        }
      if (binToDec(binary_vec(b))==255){

          break;}
*/
         // cout << "ascii code: "<<r<<" ";
          //cout << b<<"          ";


      /*if (serial.readChar(&r)!=0x2){
          cout << r;
        }
      if(r=='@'){
          break;
        }
*/


/*



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


*/
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
  serial_write.closeDevice();
}
