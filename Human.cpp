#include "Human.h"
#include "Player.h"
#include <iostream>

Human::Human(){

    name = "Human";
    move = new Move("Rock");    //make sure there is always filler stuff if nothing set

};

Human::Human(std::string newName){

    name = newName;
    move = new Move("Rock");    //make sure there is always filler stuff if nothing set

};

Move* Human::makeMove(){

    //ask user for choice
    std::cout << "Enter Move: ";

    //set choice as a string variable
    std::string a;
    std::cin >> a;

    //call setName() in move
    move->setName(a);

    //return move
    return move;

};