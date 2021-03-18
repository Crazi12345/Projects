#include "track.h"
#include <iostream>
Track::Track()
{

}
Track::Track(std::string t, int l){
 length = l;
 title = t;

};

int Track::getLength(){
  int min = length/100;
  int sec = length-min*100;
  if (sec > 59){
      sec = sec%60;
      min++;
    }
  length = sec+min*100;

  return length;
}

std::string Track::getTitle(){
  return title;
}

Track::~Track(){
  //std::cout <<"Destroyed"<<std::endl;
}
