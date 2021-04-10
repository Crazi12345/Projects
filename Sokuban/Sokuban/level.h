#ifndef LEVEL_H
#define LEVEL_H

#include <iostream>
#include <stdlib.h>
#include "game.h"
#include "board.h"
#include "pos.h"
//#include "level.h"

class Level
{
public:
  Level(Board *board);
  //enum class Direction {LEFT,RIGHT,UP,DOWN};
 // bool move(Direction d);
  void reset();
  std::string visualize();
  bool isDone;


};

#endif // LEVEL_H
