#include "Move.h"
#include <string>

std::string Move::getName(){
    return name;
}

Move::Move(){
    name = "Paper";
}