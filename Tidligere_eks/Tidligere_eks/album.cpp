#include "album.h"
#include "artist.h"
#include <iostream>
using namespace std;
Album::Album()
{

}
Album::Album(std::string at, Artist& a){
  artist=a;
  title =at;
}
string Album::getTitle(){
return title;
}






Artist& Album::getArtist(){

return artist;
}



