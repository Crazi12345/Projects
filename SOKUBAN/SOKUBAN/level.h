#ifndef LEVEL_H
#define LEVEL_H
#include "board.h"
#include "pos.h"

class level
{
public:
  level(Board *board);
  enum class Direction{L,R,U,D};
  bool move(Direction d);
  void reset();
  std::string visualize();
  bool isDone();
private:
  Board* board;
  std::vector<Pos> resetBox;
  Pos resetPlayer;

};

#endif // LEVEL_H
