#include <iostream>
#pragma once
using namespace std;

namespace ariel
{
    class Card
    {
    public:
        Card(string str, int num);
        string get_suit();
        int get_rank();

    private:
        string suit;
        int rank;
    };
}