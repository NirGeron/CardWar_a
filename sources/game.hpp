#pragma once

#include <iostream>
#include "player.hpp"
namespace ariel
{
    class Game
    {
    private:
        Player p1, p2;

    public:
        Game(Player player1, Player player2);
        void printLastTurn();
        void playAll();
        void printLog();
        void playTurn();
        void printWiner();
        void printStats();
    };
}
