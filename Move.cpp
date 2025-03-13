#include "Move.h"

Move::Move(){
    name = "Paper";
}

std::string Move::getName(){
    return name;
}

std::string* Move::getVector(){
    return &strongerAgainst[0];
}

int Move::getArrLength(){
    return arrLength;
}