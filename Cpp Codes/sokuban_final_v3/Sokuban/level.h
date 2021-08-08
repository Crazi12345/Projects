#ifndef LEVEL_H
#define LEVEL_H
#include "board.h"
#include "pos.h"
enum class Direction{LEFT,RIGHT,UP,DOWN};
class Level
{
public:
  Level(Board *board);
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
