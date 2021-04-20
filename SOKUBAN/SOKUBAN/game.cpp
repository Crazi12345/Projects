#include "game.h"
#include "level.h"
Game::Game(Level* Level){

  lvl = Level;
}
void Game::run(){
  std::string input;
  lvl->visualize();
  while(lvl->isDone() == false){
      std::cout<<"please input UP DOWN LEFT RIGHT"<<std::endl;
      std::cin >> input;
if(input == "UP" || input == "up"|| input == "w"){
          lvl->move(Direction::UP);
}
 else if(input == "DOWN" || input == "down" || input == "s"){
          lvl->move(Direction::DOWN);
}
 else if(input == "LEFT" || input == "left"|| input == "a"){
          lvl->move(Direction::LEFT);
}
 else if(input == "RIGHT" || input == "right"|| input == "d"){
          lvl->move(Direction::RIGHT);
}
 else if(input == "reset"){
         lvl->reset();
        }
    else {

    std::cout<< "you have given med det worng input" << std::endl;

        }
 lvl->visualize();
    }

  std::cout<<"CONGRATZ, YOU HAVE BEAT THIS LEVEL"<<std::endl;
}
