#include "track.h"

Track::Track()
{

}
Track::Track(std::string t, int l){
 length = l;
 title = t;

};

int Track::getLength(){
  return length;
}

std::string Track::getTitle(){
  return title;
}
