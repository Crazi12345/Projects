#include <SPI.h>
#include <SD.h>
#include <Servo.h>

File Command[20];
int Pos[8];
Servo Servos[8];
const int butt = 8;
bool state = 0;
int filenumber =-1;
int index=0;


void setup() {
pinMode(butt, INPUT);

// Open serial communications and wait for port to open:
Serial.begin(9600);
while (!Serial) {
; // wait for serial port to connect. Needed for native USB port only
}
bool isWorking = false;

while(isWorking == false){
Serial.print("Initializing SD card...");

if (!SD.begin(10)) {
Serial.println("initialization failed!");
}
isWorking = true;
Serial.println("initialization done.");
// open the file for reading:
}


FileChecking();
}





void loop() {

if(digitalRead(butt)==HIGH){
  NewCommand();
}
Command[index].name();
index++;
index == filenumber ? index = 0 : index = index;
delay(10000);

}

void NewCommand(){
bool isDone = false;
int numOfSer =0;
while(isDone == false){
;
}
}
void PrintFiles(){

  for(int i = 0; i<filenumber;i++){
    Serial.println(Command[i].name());
  }
}

void FileChecking(){

File root = SD.open("/");
while(true){
  File entry= root.openNextFile();
 

  if(!entry){
    break;
  }
  if(filenumber!=-1){
   Command[filenumber]=entry;}
  filenumber++;
 
  entry.close();
}


}

