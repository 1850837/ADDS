#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

class Player{

    protected:
    Move* move;
    std::string name;

    public:
    virtual Move* makeMove() = 0;   //virtual function to let player make their move
    std::string getName();          //function to get name
    Move* getMove();                //function to get move

};

#endif