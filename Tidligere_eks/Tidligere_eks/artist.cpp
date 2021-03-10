#include "artist.h"

Artist::Artist()
{

}
Artist::Artist(std::string a){
  artist=a;
}
std::string Artist::getArtist(){
  return artist;
}
