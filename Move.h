#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move {

    protected:
    std::string name;
    std::vector<std::string> strongerAgainst;   //array to hold strings of what is stronger against

    public:
    Move();                     //constructor
    std::string getName();      //getter of name
    std::string* getVector();   //getter of strongerAgainst vector
};

#endif