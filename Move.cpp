#include "Move.h"
#include <string>

std::string Move::getName(){
    return name;
}

Move::Move(){
    name = "Paper";
}

std::string* Move::getVector(){
    return &strongerAgainst[0];
}

int Move::getArrLength(){
    return arrLength;
}