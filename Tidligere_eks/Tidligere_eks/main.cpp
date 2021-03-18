#include <iostream>
#include "track.h"
#include "artist.h"
#include "album.h"
#include "recordcollection.h"
using namespace std;

int main()
{
  RecordCollection rc;
  Artist db(  "David Bowie");
  Album as(  "Aladdin Sane", db);
  Track wtm("Watch that man", 425);
  as.addTrack(wtm);
  Track als("Aladdin Sane", 506);
  as.addTrack(als);
  Track dis("Drive-in Saturday", 429);
  as.addTrack(dis);
  Track pid("Panic in Detroit", 425);
  as.addTrack(pid);
  Track ca(  "Cracked Actor", 256);
  as.addTrack(ca);
  Track time("Time", 509);
  as.addTrack(time);
  Track tps("The prettiest star", 326);
  as.addTrack(tps);
  Track lstnt("Let's spend the night together", 303);
  as.addTrack(lstnt);
  Track tjg("The Jean Genie", 402);
  as.addTrack(tjg);
  Track lgs("Lady grinning soul", 346);
  as.addTrack(lgs);
  rc.addAlbum(as);
  Artist pf(  "Pink Floyd");
  Album m( "Meddle",pf);
  Track ootd("One of these days", 557);
  m.addTrack(ootd);
  Track apow("A pillow of winds", 513);
  m.addTrack(apow);
  Track f( "Fearless", 608);
  m.addTrack(f);
  Track st(  "San Tropez", 343);
  m.addTrack(st);
  Track s( "Seamus", 216);
  m.addTrack(s);
  Track e( "Echoes", 2331);
  m.addTrack(e);
  rc.addAlbum(m);
  cout << as.getTitle() << ": " << as.getTotalLength() << endl; //4047
  cout << m.getTitle() <<  ": " <<  m.getTotalLength() << endl;   //4648
  cout << "Tracks in collection: " <<  rc.tracksInCollection() <<  endl; //16
















  /*
  cout << "Track test: "<<endl;
  Track T("Agressive",408);
  Track T1("Hated",331);
  Track T2("Loser",359);
  Track T3("Fair Weather Freind",324);
  Track T4("Burnout",304);
  Track T5("Sick of Me",315);
  Track T6("Censored",336);
  Track T7("Always Dead",218);
  Track T8("However You Want It Said",317);
  Track T9("Find a way",328);
  Track T10("Rock Is Dead",344);
  Track T11("King of Anything",221);
  cout << T.getLength() << endl;
  cout << T.getTitle() << endl<<endl;

  cout << "Artist test: "<<endl;
  Artist A("Beartooth");
  cout << A.getArtist() << endl<<endl;

  cout << "Album test: "<<endl;
  Album AB("Agressive", A);
  cout << AB.getTitle()<<endl;
  cout << AB.getCount()<<endl;

  cout << AB.getArtist().getArtist()<<endl;

  AB.addTrack(T);
  AB.addTrack(T1);
  AB.addTrack(T2);
  AB.addTrack(T3);
  AB.addTrack(T4);
  AB.addTrack(T5);
  AB.addTrack(T6);
  AB.addTrack(T7);
  AB.addTrack(T8);
  AB.addTrack(T9);
  AB.addTrack(T10);
  AB.addTrack(T11);

  cout << AB.getCount()<<endl;
  cout << AB.getTotalLength()<<endl;


  cout << endl<< endl<<endl;

*/
  return 0;
}
