#include <iostream>
#include "track.h"
#include "artist.h"
#include "album.h"
using namespace std;

int main()
{
  cout << "Track test: "<<endl;
  Track T("Hated",331);
  cout << T.getLength() << endl;
  cout << T.getTitle() << endl<<endl;

  cout << "Artist test: "<<endl;
  Artist A("Beartooth");
  cout << A.getArtist() << endl<<endl;

  cout << "Album test: "<<endl;
  Album AB("Agressive", A);
  cout << AB.getTitle()<<endl;
  cout << AB.getArtist()<<endl;

  return 0;
}
