#include <iostream>
#include <vector>
#include "board.h"



Board::Board(std::string boardString){


  for(int i = 0; i<boardString.length(); i++)
    {
         bS.push_back(boardString[i]);

         if((i+1)%9==0&&i!=0){

             staticElements.push_back(bS);

             bS.clear();

           }

}
  staticElements.push_back(bS);
   //For test Purpose

  for(int i = 0; i< staticElements.size();i++){
      for (int k = 0; k<bS.size();k++){
          std::cout<<staticElements.at(i).at(k);
        }
      std::cout <<std::endl;
    }
}


/*
void Board::clear_vector(){
  int num = bS.size();
  for (int i = 0; i<num;i++){
bS.erase(bS.begin()+0);
  }}
*/



char Board::getStaticElement(Pos p){
  char element=staticElements.at(p.j).at(p.i);
  return element;
}




Pos Board::getPlayerPosition(){
  int a;
  int b;
  for( int i = 0; i< staticElements.size();i++){
      for (int  k = 0; k<bS.size();k++){
          if(staticElements.at(i).at(k)=='P'){
              a= i;
              b = k;
              break;
            }
        }}

  //std::cout << a << "  " << b <<std::endl;
  playerPosition.i = b;
  playerPosition.j = a;
  return playerPosition;
}



void Board::setPlayerPosition(Pos p){
          staticElements.at(playerPosition.j).at(playerPosition.i)='.';
          staticElements.at(p.j).at(p.i) = 'P';
}



bool Board::addBox(Pos p){
  char c = staticElements.at(p.j).at(p.j);
  bool allowed;
  switch (c){
    case '.':
      allowed = true;
      break;
     case 'P':
      allowed = true;
      break;
    case 'x':
      allowed = true;
      break;
     default:
      allowed = false;

}
   if (allowed == true){
        boxes.push_back(p);
     }
   staticElements.at(p.j).at(p.j)='o';

      return allowed;





}


bool Board::removeBox(Pos p){
  bool removed;
  if(isBox(p)==true){
        setPlayerPosition(p);
        removed = true;
    }
  else {
      removed = false;
    }
 return removed;
}


bool Board::isBox(Pos p){
  bool isBox;
  if (staticElements.at(p.j).at(p.i) == 'o'||
      staticElements.at(p.j).at(p.i) == 'O'){
      isBox = true;

    }
  else {
      isBox = false;
    }
  return isBox;
}
