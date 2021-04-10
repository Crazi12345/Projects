#include <iostream>
#include "game.h"
#include "level.h"
#include "board.h"
#include "pos.h"
int main(){
  std::string boardString("--WWWW--\n"
                          "WWW..WWW\n"
                          "W..P...W\n"
                          "WW..o.xW\n"
                          "-WWWWWWW");

  Board b(boardString);
  //Level L(&b);
  Pos p;
  p.i =1;
  p.j =1;
  //L.move(Level::Direction::DOWN);

  std::cout <<b.getStaticElement(b.getPlayerPosition())<<std::endl;
 // b.setPlayerPosition(P);
  std::cout <<b.getStaticElement(b.getPlayerPosition())<<std::endl;
  //std::cout<<b.getStaticElement(P)<<std::endl;

  return 0;
}
