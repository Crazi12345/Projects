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
p.i = 6;
p.j=3;
//std::cout << b.isBox(p);
//b.removeBox(p);
// cout << b.getStaticElement(b.getPlayerPosition());
//b.getPlayerPosition();
cout << b.getGridSize().i;
cout << b.getGridSize().j;
cout <<"before move: "<< b.getStaticElement(p)<<endl;
b.addBox(p);
l.move(level::Direction::R);
l.visualize();

l.reset();
l.visualize();
  cout <<"after move: "<< b.getStaticElement(p)<<endl;
 // cout << "RIKKE HAR OGSÅ LOV TILAT VÆRE HER"<<endl;

  return 0;
}
