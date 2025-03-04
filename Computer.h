#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player{

    public:
    Computer();         //constructor

    char makeMove();    //move maker

};

#endif