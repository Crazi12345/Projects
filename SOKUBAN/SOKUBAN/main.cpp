#include <iostream>
#include "pos.h"
#include "board.h"
#include "level.h"
#include "game.h"



int main(){
    std::string boardString = "--WWWW--\n"
                              "WWW..WWW\n"
                              "W..P...W\n"
                              "WW..ooxW\n"
                              "-W....xW\n"
                              "-WWWWWWW";
    Board b(boardString);


    Level l(&b);

    Game g(&l);
    g.run();
}

