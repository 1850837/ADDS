#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(){

//players
Human* a = new Human("Maddy");
Human* b = new Human("B");

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

/* okay so! We are getting a segmentation fault accessing the vector. Accessing anything,
be it elements or the .size() function, causes a segmentation fault. Investigate how vectors
function. Investigate recommended ways to pass it through functions (with ptrs obvs), and what's
actually going on here. There are also lots of comments to take out.

Additionally we need to check stuff like, redundant #include things, etc. These are written
in the book.
*/