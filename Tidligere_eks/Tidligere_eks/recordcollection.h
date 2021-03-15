#ifndef RECORDCOLLECTION_H
#define RECORDCOLLECTION_H
#include "album.h"
#include"artist.h"
#include<iostream>
#include <vector>
using namespace std;
class RecordCollection
{
public:
  RecordCollection();
  //RecordCollection(Album&);
  void addAlbum(Album&);
  int tracksInCollection();
private:
  vector<Album*> collection;
};

#endif // RECORDCOLLECTION_H
