#include "card.hpp"
using namespace ariel;

Card::Card(string str, int num) : suit(str), rank(num) {
}

string Card::get_suit() { return suit; }
int Card::get_rank() { return rank; }
