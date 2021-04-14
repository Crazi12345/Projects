#include <iostream>
#include "board.h"
#include "level.h"
using namespace std;

int main()
{std::string boardString("--WWWW--\n"
                         "WWW..WWW\n"
                         "W..P...W\n"
                         "WW..o.xW\n"
                         "-WWWWWWW");
  Board b(boardString);
  level l(&b);
 //cout << b.getStaticElement(b.getPlayerPosition());
Pos p;
p.i = 4;
p.j=3;
//std::cout << b.isBox(p);
//b.removeBox(p);
// cout << b.getStaticElement(b.getPlayerPosition());
//b.getPlayerPosition();


l.reset();
l.move(level::Direction::D);
l.visualize();

l.move(level::Direction::R);
l.visualize();



 // cout << "RIKKE HAR OGSÅ LOV TILAT VÆRE HER"<<endl;

  return 0;
}
