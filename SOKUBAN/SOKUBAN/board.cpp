#include "board.h"

Board::Board(std::string boardString){

   int count = 0;
Pos pb;
  for (int i = 0; i<boardString.length();i++){
      switch (boardString[i]){
        case 'P':
          playerPosition.i = i%(count*9);
          playerPosition.j = count;
          bS.push_back('.');
          break;
        case 'o':
           pb.i = i%(count*9);
           pb.j = count;
           boxes.push_back(pb);
           bS.push_back('.');

          break;
        case 'O':
          pb.i = i%(count*9);
          pb.j = count;
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
    }
*/
}

char Board::getStaticElement(Pos p){

  return staticElements.at(p.j).at(p.i);
}

Pos Board::getPlayerPosition(){

return playerPosition;

}


void Board::setPlayerPosition(Pos p){
playerPosition.i = p.i;
playerPosition.j = p.j;
}

bool Board::addBox(Pos p){
  char c = staticElements.at(p.j).at(p.j);
  bool allowed;
  switch (c){
    case '.':
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
      return allowed;

}
Pos Board::getGridSize(){

 Pos p;
 p.j = staticElements.size();
 p.i = bS.size();
 return p;
}

bool Board::removeBox(Pos p){
  bool removed = false;
  if (isBox(p)==true){
      for(int i = 0; i<boxes.size();i++){
          if(boxes.at(i).i==p.i && boxes.at(i).j == p.j){
           //   std::cout<< "Size before: "<< boxes.size()<<std::endl;
              boxes.erase(boxes.begin()+i);
             // std::cout<< "Size after: "<< boxes.size()<<std::endl;
            }
        }
    }
 return 0;
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


