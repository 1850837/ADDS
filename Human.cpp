#include "Human.h"
#include "Player.h"
#include <iostream>

Human::Human(){

    name = "Human";
    move = 'R';

};

Human::Human(std::string newName){

    name = newName;
    move = 'R';

};

char Human::makeMove(){

    //ask user for choice
    std::cout << "Enter Move: ";

    //set choice as move
    std::cin >> move;

    //return move
    return move;

};