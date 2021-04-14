#ifndef LEVEL_H
#define LEVEL_H
#include <iostream>
#include "board.h"


class level
{
public:
        level(Board*board);
        enum Direction{LEFT,RIGHT,UP,Down};
        bool move(Direction d);
        void reset();
        std::string visualize();
        bool isDone();
};


#endif // LEVEL_H
