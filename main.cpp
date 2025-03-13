#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(){

//creating player instances that are ptrs so the referee can handle them
Human* a = new Human("Maddy");
Human* b = new Human("B");

//creating referee instance
Referee c = Referee();

//pointer to hold the winner
Player* d;

//changing the ptr to the winner
d = c.refGame(a, b);

//presenting final options
if(d == a){
    std::cout << a->getName() << " Wins\n";
} else if(d == b){
    std::cout << b->getName() << " Wins\n";
} else if(d == nullptr){
    std::cout << "It's a tie!\n";
};

return 0;

};