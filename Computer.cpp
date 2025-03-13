#include "Computer.h"
#include "Rock.h"

Computer::Computer(){

    name = "Computer";          //assigning name
    move = new Rock;            //assigning move, always rock in this case

};

Move* Computer::makeMove(){
    return move;
}