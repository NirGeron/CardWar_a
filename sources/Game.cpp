#include <fstream>
#include <sstream>
#include "game.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

Game::Game(Player p1, Player p2) : p1(p1),p2(p2)
{
    for (size_t i = 1; i <= 13; i++){
        for (size_t j = 0; j < 4; j++){
        }
    }
}

void Game::printLog(){
}

void Game::printStats(){
}

void Game::printLastTurn(){
}

void Game::playTurn(){
}

void Game::playAll(){
}

void Game::printWiner(){
}
