#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {

    private:
    std::string name;

    public:
    std::string getName();

    Move();         //constructor

    //CHECK IF CONSTRUCTOR SHOULD BE PUBLIC

    Move(std::string moveName); //constructor where name is given

    void setName(std::string newName);  //function to set a new move
};

#endif