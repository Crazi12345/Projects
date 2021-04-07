#ifndef BOARD_H
#define BOARD_H
#include <iostream>

class Board
{
public:
  Board(std::string boardString);
  char getStaticElement(Pos p);

};

#endif // BOARD_H
