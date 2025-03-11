#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move {

    protected:
    std::string name;
    std::vector<std::string> strongerAgainst;   //array to hold strings of what is stronger against

    public:
    std::string getName();

    Move();         //constructor

    //CHECK IF CONSTRUCTOR SHOULD BE PUBLIC
};

#endif