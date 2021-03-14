#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
#include "artist.h"



class Album
{

  public:
  Album();
  Album(std::string, Artist&);
  std::string getTitle();
  int getCount();
   Artist& getArtist();
  //void addTrack(Track&);
  int getTotalLength();
  //~Album();

 private:
  std::string title;
  Artist artist;
 // vector<Track*> tracks;
  int   count;

};

#endif // ALBUM_H
