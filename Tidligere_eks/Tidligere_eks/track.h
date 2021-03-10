#ifndef TRACK_H
#define TRACK_H

#include <iostream>
class Track
{
public:

  Track();
  Track(std::string,int);
  std::string getTitle();
  int getLength();
 // ~Track();
private:
  std::string title;
  int length;
};

#endif // TRACK_H
