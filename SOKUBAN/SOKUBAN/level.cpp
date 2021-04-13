#include "level.h"
#include "board.h"
level::level(Board *boad)
{
  Pos p,
  resetPlayer = boad->getPlayerPosition();
  std::cout << resetPlayer.i;
    std::cout << resetPlayer.j;
  for (int j = 0; j<boad->getGridSize().j;j++){

      for(int i = 0; i<boad->getGridSize().i;i++){
          p.i = i;
          p.j = j;
          if(boad->isBox(p)){
              resetBox.push_back(p);
            }
        }
    }
  board = boad;
}

bool level::move(Direction d){
 // std::cout<<"RIKKE ER OKAY NOGEN GANGE"<<std::endl;
  bool hasMoved = true;
Pos a;
 Pos ab;
//std::cout << "Test: "<<board->getStaticElement(board->getPlayerPosition());
  switch (d) {
    case Direction::U:
       a = board->getPlayerPosition();
      a.j = a.j-1;
      if(board->getStaticElement(a) == 'W'){
          hasMoved = false;
        }
      else if (board->isBox(a)){

          ab.j = ab.j-1;
          if(a.j-1 == 'W'){
              hasMoved = false;
            }
          else{
              board->addBox(ab);
              board->removeBox(a);
              board->setPlayerPosition(a);
           }
        }
      else {
          board->setPlayerPosition(a);
        }
     // std::cout<< "U";
      break;

    case Direction::D:
      a = board->getPlayerPosition();
     a.j = a.j+1;
     if(board->getStaticElement(a) == 'W'){
         hasMoved = false;
       }
     else if (board->isBox(a)){

         ab.j = ab.j+1;
         if(a.j+1 == 'W'){
             hasMoved = false;
           }
         else{
             board->addBox(ab);
             board->removeBox(a);
             board->setPlayerPosition(a);
          }
       }
     else {


         board->setPlayerPosition(a);
       }
      break;

     case Direction::R:
      a = board->getPlayerPosition();
     a.i = a.i+1;
     if(board->getStaticElement(a) == 'W'){
         hasMoved = false;
       }
     else if (board->isBox(a)){

         ab.i = ab.i+1;
         if(a.i+1 == 'W'){
             hasMoved = false;
           }
         else{
             board->addBox(ab);
             board->removeBox(a);
             board->setPlayerPosition(a);
          }
       }
     else {

         board->setPlayerPosition(a);
       }
      break;

     case Direction::L:
      a = board->getPlayerPosition();
     a.i = a.i-1;
     if(board->getStaticElement(a) == 'W'){
         hasMoved = false;
       } else if (board->isBox(a)){

         ab.i = ab.i-1;
         if(a.i-1 == 'W'){
             hasMoved = false;
           }
         else{
             board->removeBox(a);
             board->addBox(ab);

             board->setPlayerPosition(a);
          }
       }
     else {

         board->setPlayerPosition(a);

       }
      break;
    default:
      hasMoved =false;
      break;
    }
//  std::cout<<"GRLDER"<<std::endl;
  return hasMoved;


}

void level::reset(){
Pos p;
  board->setPlayerPosition(resetPlayer);
  for (int j = 0; j<board->getGridSize().j;j++){

      for(int i = 0; i<board->getGridSize().i;i++){
          p.i = i;
          p.j = j;
          if(board->isBox(p)){
              board->removeBox(p);
              for (int k = 0; k < resetBox.size();k++){
              board->addBox(resetBox.at(k));
                }
            }
        }
    }

}


std::string level::visualize(){
  Pos p;
  for(int j = 0;j<(board->getGridSize().j);j++){
      for(int i = 0; i<board->getGridSize().i;i++){
         p.j = j;
         p.i = i;
         if(p.i == board->getPlayerPosition().i &&
            p.j == board->getPlayerPosition().j){
             std::cout<<'P';
           }
          else if (board->isBox(p)){
             if(board->getStaticElement(p)=='x'){
                 std::cout<<'O';
               }
             else {
                 std::cout<<'o';
               }
           }
         else{
         std::cout << board->getStaticElement(p);}
        }
      std::cout << std::endl;
    }

  return "string";
}
