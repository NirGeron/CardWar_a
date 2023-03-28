#pragma once

#include <iostream>
#include "card.hpp"
namespace ariel
{
    class Player
    {
    public:
        Player(string str);
        int stacksize() ;
        int cardesTaken();
        
    private:
        string name;
    };
}