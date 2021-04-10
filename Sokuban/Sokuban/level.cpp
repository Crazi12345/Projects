#include "level.h"
#include "board.h"

Level::Level(Board *board)
{Pos p;
  p.i = 1;
  p.j = 0;
 //std::cout<< board->getStaticElement(p);
}/*



//enum Level::Direction{LEFT,RIGHT,UP,DOWN};
bool Level::move(Direction d){
  bool hasMoved;
Direction c = Level::Direction::DOWN;
  switch (c){
    case Direction::LEFT:
      std::cout<<"LEFT"<<std::endl;
      //hasMoved = true;

      break;
    case Direction::RIGHT:
      std::cout<<"RIGHT"<<std::endl;
      //hasMoved = true;
      //p.i = p.i+1;
      break;
    case Direction::UP:
      std::cout<<"UP"<<std::endl;
     // hasMoved = true;
      //p.j = p.j-1;
      break;
    case Direction::DOWN:
      std::cout<<"DOWN"<<std::endl;
    //  hasMoved = true;
      break;
     default:
      std::cout<< "ERROR"<<std::endl;
     // hasMoved = false;
    }
  return hasMoved;
}*/
