#ifndef ARTIST_H
#define ARTIST_H
#include <iostream>

class Artist
{
public:
  Artist();
  Artist(std::string artist);
  std::string getArtist();
private:
  std::string artist;
};

#endif // ARTIST_H
