#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move {

    protected:
    std::string name;
    int arrLength;  //tester value

    //testing
    //std::vector<std::string> strongerAgainst;   //array to hold strings of what is stronger against

    public:
    Move();                     //constructor
    std::string getName();      //getter of name
    std::string* getVector();   //getter of strongerAgainst vector

    //testing
    std::vector<std::string> strongerAgainst = {"Blank1", "Blank2"};
    //added initial values

    int getArrLength();
};

#endif