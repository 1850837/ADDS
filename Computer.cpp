#include "Computer.h"
#include "Rock.h"

Computer::Computer(){

    name = "Computer";          //assigning name
    move = new Rock;    //assigning move

};

Move* Computer::makeMove(){
    return move;
}