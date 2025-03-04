#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(){

//players
Human* a = new Human("Maddy");
Computer* b = new Computer();

Referee c = Referee();

//pointer
Player* d;

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