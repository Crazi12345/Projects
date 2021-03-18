#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
#include "artist.h"
#include "track.h"
#include <vector>


class Album
{

  public:
  Album();
  Album(std::string, Artist&);
  std::string getTitle();
  int getCount();
  Artist& getArtist();
  void addTrack(Track&);
  int getTotalLength();
  ~Album();

 private:
  std::string title;
  Artist artist;
  std::vector<Track*> tracks;
  int   count;

};

#endif // ALBUM_H
