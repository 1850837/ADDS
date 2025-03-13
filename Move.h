#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move {

    protected:
    std::string name;   //handling name of move
    int arrLength;      //handing length of vector
    //strongerAgainst vector to hold anything this move is stronger against
    std::vector<std::string> strongerAgainst;

    public:
    Move();                     //constructor
    std::string getName();      //getter of name
    std::string* getVector();   //getter of strongerAgainst vector
    int getArrLength();         //getter of arrLength variable
};

#endif