
#include "ema.h"
#include <iostream>
EMA::EMA()
{

}
EMA::EMA(std::string email)
{
emailAddress = email;
}

std::string EMA::getEMA(){
    return emailAddress;
}

void EMA::setEMA(std::string email_temp){

    emailAddress = email_temp;
}





bool EMA::isValid(){

if(snabelA()!= -1 && dot() == true && checkLengths()==true && checkChars()==true){
    return true;
}
else {
    return false;
}

}

int EMA::snabelA()
{
    int val = -1;
    bool isFound = false;
    for(int i =0; i < emailAddress.length(); i++){

        if(emailAddress.at(i)=='@'&& isFound == false){
            val = i;
            isFound = true;
        }
        else if(emailAddress.at(i)=='@'&& isFound == true){
            val = -1;
        }
    }

    return val;
}

bool EMA::dot()
{
    int dot_val=-1;
    bool isFirst = false;
    bool isAnswer = false;
    for( int i = 0; i < emailAddress.length();i++){
        if (emailAddress.at(i) == '.'){
            dot_val = i;

            if(dot_val-snabelA()<=2){
                isAnswer = false;

            }
            else if ( isFirst == false){

                isAnswer =  true;
            }
            else{
                return false;
            }
            isFirst = true;

        }
    }
    return isAnswer;
}

bool EMA::checkLengths()
{
    int length=0;
    for(int i = 0; i<snabelA(); i++){
        length++;
    }


    if(length<5 || length>64){
      return false;
       }
    else if(emailAddress.length()-snabelA()<5 ||
            emailAddress.length()-snabelA()>255){
        return false;
    }
    else {
        return true;
    }



}

bool EMA::checkChars()
{
   bool isCorrect = true;
   bool isFound = false;
   std::string test = "abcdefghijklmnopqerstuvwxyzæåø@%&.";
   for (int i = 0; i<emailAddress.length();i++){
       isFound= false;
       for(int j = 0; j < test.length();j++){
           if(emailAddress.at(i)==test.at(j)){
               isFound = true;
           }

       }
       if(isFound == false){
           isCorrect = false;
       }
   }
   return isCorrect;

}




