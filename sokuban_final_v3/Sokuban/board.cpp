#include "board.h"
#include "pos.h"

Board::Board(std::string boardString){
  int count = 0;
  Pos pb;
  for (int i = 0; i<boardString.length();i++){
      switch(boardString[i]){
        case 'P':
          playerPosition.j =i%(count*9);
          playerPosition.i = count;
          bS.push_back('.');
          break;

         case 'o':
          pb.i = count;
          pb.j = i%(count*9);
          boxes.push_back(pb);
          bS.push_back('.');
          break;

         case'O':
          pb.i = count;
          pb.j = i%(count*9);
          boxes.push_back(pb);
          bS.push_back('x');
          break;

         case '\n':
          staticElements.push_back(bS);
          count++;
          bS.clear();
          break;

         default:
          bS.push_back(boardString[i]);
          break;

        }
    }
  staticElements.push_back(bS);

 /* for(int j = 0; j<staticElements.size();j++){
        for(int k = 0; k<bS.size();k++){
           std::cout<< staticElements.at(j).at(k);
          }
        std::cout<<std::endl;
}*/

}

char Board::getStaticElement(Pos p){
  return staticElements.at(p.i).at(p.j);
}


Pos Board::getPlayerPosition(){
return playerPosition;
}

void Board::setPlayerPosition(Pos p){
playerPosition.i = p.i;
playerPosition.j = p.j;
}


bool Board::addBox(Pos p){
  char c = staticElements.at(p.i).at(p.j);
  bool allowed = false;
  if(isBox(p)!= true){
  switch (c){
    case '.':
      allowed = true;
      break;
    case 'x':
      allowed = true;
      break;
    default:
     allowed = false;
      break;
}
   if (allowed == true){
        boxes.push_back(p);
     }}
      return allowed;
}


Pos Board::getGridSize(){
 Pos p;
 p.i = staticElements.size();
 p.j = bS.size();
 return p;
}


bool Board::removeBox(Pos p){
  bool removed = false;
  if (isBox(p)==true){
      for(int i = 0; i<boxes.size();i++){
          if(boxes.at(i).i==p.i && boxes.at(i).j == p.j){
              boxes.erase(boxes.begin()+i);
              removed = true;
            }
        }
    }
 return removed;
}


bool Board::isBox(Pos p){
  bool isBox = false;
  for (int i = 0;i<boxes.size();i++){
      if(p.i==boxes.at(i).i && p.j == boxes.at(i).j)
        {
          isBox=true;
          break;}

    }
  return isBox;
}



