#include "level.h"
#include "board.h"
Level::Level(Board *boad)
{ board = boad;
  Pos p;


  for (int j = 0; j<board->getGridSize().j;j++){

      for(int i = 0; i<board->getGridSize().i;i++){
          p.i = i;
          p.j = j;
          if(board->isBox(p)){
              resetBox.push_back(p);
            }
        }
    }

   resetPlayer = board->getPlayerPosition();
}

bool Level::move(Direction d){
  bool hasMoved = true;
Pos a = board->getPlayerPosition();
 Pos ab;

  switch (d) {
    case Direction::UP:

      a.j = a.j-1;
      ab = a;
      if(board->getStaticElement(a) == 'W'){
          hasMoved = false;
        }
      else if (board->isBox(a)){
          ab.j = ab.j-1;
          if(board->getStaticElement(ab)  == 'W'){
              hasMoved = false;
            }
          else if(board->isBox(ab)){
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

    case Direction::DOWN:

     a.j = a.j+1;
      ab = a;
     if(board->getStaticElement(a) == 'W'){
         hasMoved = false;
       }

     else if (board->isBox(a)){

         ab.j = ab.j+1;
         if(board->getStaticElement(ab) == 'W'){

             hasMoved = false;
           }
         else if(board->isBox(ab)){
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

     case Direction::RIGHT:

     a.i = a.i+1;
     ab = a;
     if(board->getStaticElement(a) == 'W'){
         hasMoved = false;
       }
     else if (board->isBox(a)){

         ab.i = ab.i+1;
         if(board->getStaticElement(ab)  == 'W'){
             hasMoved = false;
           }
         else if(board->isBox(ab)){
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

     case Direction::LEFT:

     a.i = a.i-1;
     ab = a;
     if(board->getStaticElement(a) == 'W'){
         hasMoved = false;
       } else if (board->isBox(a)){

         ab.i = ab.i-1;
         if(board->getStaticElement(ab) == 'W'){
             hasMoved = false;
           }
         else if(board->isBox(ab)){
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

void Level::reset(){
  Pos p;

  //std::cout <<"J: "<<resetPlayer.j;
    board->setPlayerPosition(resetPlayer);
    for (int j = 0; j<board->getGridSize().j;j++){

        for(int i = 0; i<board->getGridSize().i;i++){
            p.i = i;
            p.j = j;
            if(board->isBox(p)){
                board->removeBox(p);

                  }
              }

          }
    for (int k = 0; k < resetBox.size();k++){
    board->addBox(resetBox.at(k));
      }

  }


std::string Level::visualize(){
  Pos p;
    system("clear");
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
bool Level::isDone(){
  Pos p;
  bool isGameDone=true;
  for(int j = 0; j < board->getGridSize().j;j++){

      for(int i = 0; i < board->getGridSize().i;i++){
          p.i = i;
          p.j = j;
          if (board->isBox(p)){
              if(board->getStaticElement(p)!='x'){
                  isGameDone = false;
                }
            }
        }
    }
  return isGameDone;
}
