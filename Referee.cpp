#include "Referee.h"

//testing
#include <iostream>

Referee::Referee(){

};

Player* Referee::refGame(Player* player1, Player* player2){

    //variable declaration
    //This is Player2 as if it isn't player2, it gets set to player1
    Player* ptr = player2;

    //set the moves
    player1->makeMove();
    player2->makeMove();

    //if-statement for determining which is stronger
    //nested in a for-loop to iterate through the length of the vector
    for (int i = 0; i < player1->getMove()->getArrLength(); i++){

        if(player2->getMove()->getName() == player1->getMove()->getVector()[i]){
            ptr = player1;      //changes the ptr variable to the winning person
        }
    }

    return ptr;

};