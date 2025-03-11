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

    Move(std::string moveName); //constructor where name is given

    void setName(std::string newName);  //function to set a new move
    //DON'T THINK WE NEED THIS?

    //DOES MOVE NEED TO BE ABSTRACT??
};

#endif