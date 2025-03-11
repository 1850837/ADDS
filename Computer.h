#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player{

    private:
    Computer();         //constructor

    public:
    Move* makeMove();    //move maker function

};

#endif