#ifndef STRINGTOOBJECT_H
#define STRINGTOOBJECT_H

#include "Move.h"

class stringToObject{

    public:
    stringToObject();   //constructor

    Move* toObject(std::string name);   //function to perform action

};

#endif