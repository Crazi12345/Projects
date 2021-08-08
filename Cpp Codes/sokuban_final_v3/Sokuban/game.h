#ifndef GAME_H
#define GAME_H
#include "level.h"

class Game
{
public:
  Game(Level* Level);
  void run();
private:
  Level* lvl;
};

#endif // GAME_H
