#include "Referee.h"

Referee::Referee(){

};

Player* Referee::refGame(Player* player1, Player* player2){

    player1->makeMove();
    player2->makeMove();

    //player 1 plays rock
    if((player1->getMove() == 'R') && (player2->getMove() == 'S')){
        return player1;
        //player 1 wins
    } else if((player1->getMove() == 'R') && (player2->getMove() == 'P')){
        return player2;
        //player 2 wins
    } 
    
    //player 1 plays scissors
    else if((player1->getMove() == 'S') && (player2->getMove() == 'R')){
        //player 2 wins
        return player2;
    } else if((player1->getMove() == 'S') && (player2->getMove() == 'P')){
        //player 1 wins
        return player1;
    }

    //player 1 plays paper
    else if((player1->getMove() == 'P') && (player2->getMove() == 'S')){
        //player 2 wins
        return player2;
    } else if((player1->getMove() == 'P') && (player2->getMove() == 'R')){
        //player 1 wins
        return player1;
    }

    //tie or other char
    else{
        return nullptr;
    }

};