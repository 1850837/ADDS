#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player{

    public:
    Human();            //constructor
    Human(std::string newName); //constructor with name

    Move* makeMove();    //move maker

};

#endif