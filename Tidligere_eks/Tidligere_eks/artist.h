#ifndef ARTIST_H
#define ARTIST_H
#include <iostream>
using namespace std;
class Artist
{
public:
  Artist();
  Artist(std::string artist);
  string getArtist();
private:
  string artist;
};

#endif // ARTIST_H
