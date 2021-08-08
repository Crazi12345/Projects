#include "artist.h"
#include <iostream>
Artist::Artist()
{

}
Artist::Artist(std::string a){
  artist=a;
}
std::string Artist::getArtist(){
  return artist;
}
