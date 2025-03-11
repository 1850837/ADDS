#include "Referee.h"

//testing
#include <iostream>

Referee::Referee(){

};

Player* Referee::refGame(Player* player1, Player* player2){

    //variable declaration
    //This is Player2 as if it isn't player2, it gets set to player1
    Player* ptr = player2;

    //testing
    std::cout << "Element 1 is " << player1->getMove()->getVector()[0];
    //std::cout << " and element 2 is " << player1->getMove()->getVector()[1];
    //std::cout << "The size is " << player1->getMove()->getVector()->size() << "\n";

    //set the moves
    player1->makeMove();
    player2->makeMove();

    //if-statement for determining which is stronger
    //nested in a for-loop to iterate through the length of the vector
    for (int i = 0; i++; i < player1->getMove()->getVector()->size()){
        //testing
        std::cout << player2->getMove()->getName() << "\n";
        std::cout << player1->getMove()->getVector()[i] << "\n";

        if(player2->getMove()->getName() == player1->getMove()->getVector()[i]){
            ptr = player1;      //changes the ptr variable to the winning person
        }
    }

    return ptr;

};