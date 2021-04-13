#ifndef BOARD_H
#define BOARD_H
#include "pos.h"
#include <iostream>
#include <vector>
class Board
{
public:
  Board(std::string boardString);
  char getStaticElement(Pos p);
  Pos getPlayerPosition();
  Pos getGridSize();
  void setPlayerPosition(Pos p);
  bool addBox(Pos p);
  bool removeBox(Pos p);
  bool isBox(Pos p);
private:
  std::vector<std::vector<char>>staticElements;
  std::vector<char> bS;
  std::vector<Pos> boxes;
  Pos playerPosition;
};

#endif // BOARD_H
