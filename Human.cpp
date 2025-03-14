#include "Human.h"
#include <iostream>
#include "stringToObject.h"

Human::Human(){

    name = "Human";
    move = nullptr;

};

Human::Human(std::string newName){

    name = newName;
    move = nullptr;

};

Move* Human::makeMove(){

    //variable initialising
    std::string a;

    //ask user for choice

    //TESTING
    // std::cout << "Enter Move: ";

    //set choice as a string variable
    std::cin >> a;

    //create an object of that name
    stringToObject object = stringToObject();   //creating an instance of the StringToObject class
    move = object.toObject(a);                  //set move to the object equivalent of the string

    //return move
    return move;

};