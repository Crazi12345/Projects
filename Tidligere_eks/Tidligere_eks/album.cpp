#include "album.h"
#include "artist.h"
#include "track.h"
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

int Album::getCount(){
  int count = tracks.size();
  return count;
}


void Album::addTrack(Track& track){
 tracks.push_back(&track);
 //for (int i =0;i<tracks.size();i++){
     //cout<<track.at(i).getTitle()<<"  "<<track.at(i).getLength()<<endl;

  // }
}


Artist& Album::getArtist(){

return artist;
}

int Album::getTotalLength(){
  int length=0;
  for (int i=0;i<getCount();i++)
{
     length=length+tracks.at(i)->getLength();
    }
  return length;
 }

Album::~Album(){
 // std::cout << "destroyed Album"<<endl;
}
