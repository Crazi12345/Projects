#include "recordcollection.h"
#include "album.h"
#include "track.h"

RecordCollection::RecordCollection()
{

}
void RecordCollection::addAlbum(Album& a){
  collection.push_back(&a);
}

int RecordCollection::tracksInCollection(){
  int tracks=0;
  for (int i=0; i<collection.size();i++){
      tracks=tracks+collection.at(i)->getCount();
    }
  return tracks;
}
