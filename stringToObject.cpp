#include "stringToObject.h"

#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"

stringToObject::stringToObject(){

};

Move* stringToObject::toObject(std::string name){
    //if the string name is one of the Move subclass names
    //then create a new move and return the pointer to that
    //if not, return nullptr

    //pointer to return
    Move* ptr;

    //the three originals
    if (name == "Rock"){
        ptr = new Rock();
    } else if (name == "Paper"){
        ptr = new Paper();
    } else if (name == "Scissors"){
        ptr = new Scissors();
    }

    //the new ones
    else if (name == "Monkey"){
        ptr = new Monkey();
    } else if (name == "Ninja"){
        ptr = new Ninja();
    } else if (name == "Pirate"){
        ptr = new Pirate();
    } else if (name == "Robot"){
        ptr = new Robot();
    } else if (name == "Zombie"){
        ptr = new Zombie();
    }

    //case for neither
    else {
        ptr = nullptr;
    }

    return ptr;

}