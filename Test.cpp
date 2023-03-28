#include "doctest.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include "sources/game.hpp"
#include "sources/player.hpp"

using namespace ariel;
using namespace std;


TEST_CASE("First Game"){

    Player player1("Hagai");
    Player player2("Bar");

    Game game(player1,player2); 
    for (int i=0;i<10;i++) {
        CHECK_NOTHROW(game.playTurn());
    }
    CHECK_NOTHROW(game.printLastTurn());
    CHECK(player1.cardesTaken() >= 0);
    CHECK(player1.stacksize() <= 20);
    CHECK(player2.stacksize() <= 20);
    CHECK(player2.cardesTaken() >= 0);
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printWiner());

}

TEST_CASE("Second Game"){

    Player player1("Talia");
    Player player2("Nir");

    Game game(player1,player2); 
    for (int i=0;i<8;i++) {
        CHECK_NOTHROW(game.playTurn());
    }
    CHECK_NOTHROW(game.printLastTurn());
    CHECK(player2.cardesTaken() >= 0);
    CHECK(player2.stacksize() <= 31);
    CHECK(player1.cardesTaken() >= 0);
    CHECK(player1.stacksize() <= 31);
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printWiner());
}
