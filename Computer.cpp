#include "Computer.h"

Computer::Computer(){

    name = "Computer";          //assigning name
    move = new Move("Rock");    //assigning move

};

Move* Computer::makeMove(){
    return move;
}