#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <vector>
#include "pos.h"
#include "level.h"
class Board
{
public:
  Board(std::string boardString);
  //void clear_vector();
  char getStaticElement(Pos p);
  Pos getPlayerPosition();
  void setPlayerPosition(Pos p);
  bool addBox(Pos p);
  bool removeBox(Pos p);
  bool isBox(Pos p);
private:
  std::vector<char> bS;
  std::vector<std::vector<char>>staticElements;
  std::vector<Pos>boxes;
  Pos playerPosition;

};

#endif // BOARD_H
