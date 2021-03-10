#include "album.h"
#include "artist.h"
#include <iostream>
Album::Album()
{

}
Album::Album(std::string at, Artist& a){
  artist=a;
  title =at;
}
std::string Album::getArtist(){
return artist.getArtist();
}

