#include "Referee.h"

Referee::Referee(){

};

Player* Referee::refGame(Player* player1, Player* player2){

    //variable declaration
    //There is a loop to check if player 1 won or if there is a tie
    //As such, the player ptr should be set to player2
    Player* ptr = player2;

    //set the moves
    player1->makeMove();
    player2->makeMove();

    //if-statement for determining which is stronger
    //nested in a for-loop to iterate through the length of the vector
    for (int i = 0; i < player1->getMove()->getArrLength(); i++){

        //checks to see if the second player's move is within
        //the first player's strongerAgainst vector
        //and if so, sets player1 as the winner
        //if not, player2 is in ptr
        if(player2->getMove()->getName() == player1->getMove()->getVector()[i]){
            ptr = player1;      //changes the ptr variable to the winning person
        }
    }

    //checking for a tie by comparing the names of the moves chosen
    if(player1->getMove()->getName() == player2->getMove()->getName()){
        ptr = nullptr;
    }

    return ptr;

};