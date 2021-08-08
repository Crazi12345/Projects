#include <iostream>
#include "pos.h"
#include "board.h"
#include "level.h"
#include "game.h"

std::string loadTestLvl(){
    std::string boardString("--WWWW--\n"
                            "WWW..WWW\n"
                            "W..P...W\n"
                            "WW..ooxW\n"
                            "-W....xW\n"
                            "-WWWWWWW");
    return boardString;
}

void testBoard(Board b){
    std::cout << b.isBox(Pos(3,4)) << " 1" << std::endl;
    std::cout << b.isBox(Pos(0,0)) << " 0" << std::endl;
    std::cout << b.addBox(Pos(2,4)) << " 1" << std::endl;
    std::cout << b.addBox(Pos(2,4)) << " 0" << std::endl;
    std::cout << b.isBox(Pos(2,4)) << " 1" << std::endl;
    std::cout << "Test remove box" << std::endl;
    std::cout << b.removeBox(Pos(2,4)) << " 1" << std::endl;
    std::cout << b.removeBox(Pos(2,4)) << " 0" << std::endl;
    std::cout << b.isBox(Pos(3,4)) << " 1" << std::endl;
    std::cout << b.isBox(Pos(2,4)) << " 0" << std::endl;
    std::cout << b.getStaticElement(Pos(2,4)) << " ." << std::endl;
    std::cout << b.getStaticElement(Pos(0,0)) << " -" << std::endl;
    std::cout << b.getStaticElement(Pos(3,4)) << " ." << std::endl;
    std::cout << b.getStaticElement(Pos(3,6)) << " x" << std::endl;
    std::cout << b.getStaticElement(Pos(5,7)) << " W" << std::endl;
    std::cout << b.getPlayerPosition().i << " 2" << std::endl;
    std::cout << b.getPlayerPosition().j << " 3" << std::endl;
    b.setPlayerPosition(Pos(4,2));
    std::cout << b.getPlayerPosition().i << " 4" << std::endl;
    std::cout << b.getPlayerPosition().j << " 2" << std::endl;
}

void testLevel(Level l){
    std::cout << "Test kasse der står i vejen" << std::endl;
    std::cout << l.visualize() << std::endl << std::endl;
    l.move(Direction::DOWN);
    std::cout << l.visualize() << std::endl << std::endl;
    l.move(Direction::RIGHT);
    std::cout << l.visualize() << std::endl << std::endl;

    std::cout << "Test reset" << std::endl;
    l.reset();
    std::cout << l.visualize() << std::endl << std::endl;

    std::cout << "Test at gå ind i væg" << std::endl;
    l.move(Direction::UP);
    std::cout << l.visualize() << std::endl << std::endl;
    l.move(Direction::UP);
    std::cout << l.visualize() << std::endl << std::endl;

    l.reset();

    std::cout << "Test løsning af level" << std::endl;
    std::cout << l.isDone() << " 0" << std::endl;
    l.move(Direction::RIGHT);
    std::cout << l.visualize() << std::endl << std::endl;
    l.move(Direction::DOWN);
    std::cout << l.visualize() << std::endl << std::endl;
    l.move(Direction::RIGHT);
    std::cout << l.visualize() << std::endl << std::endl;
    std::cout << l.isDone() << " 0" << std::endl;
    l.move(Direction::LEFT);
    std::cout << l.visualize() << std::endl << std::endl;
    l.move(Direction::LEFT);
    std::cout << l.visualize() << std::endl << std::endl;
    l.move(Direction::DOWN);
    std::cout << l.visualize() << std::endl << std::endl;
    l.move(Direction::RIGHT);
    std::cout << l.visualize() << std::endl << std::endl;
    l.move(Direction::RIGHT);
    std::cout << l.visualize() << std::endl << std::endl;
    std::cout << l.isDone() << " 1" << std::endl;

    l.reset();
}


int main(){
    std::string boardString = loadTestLvl();
    Board b(boardString);
    testBoard(b);

    Level l(&b);
    testLevel(l);

    Game g(&l);
    g.run();
}
