#include"Pile.hpp"
#include<iostream>

int main()
{
    Pile pile(5);
    pile.empile(1);
    pile.empile(2);
    pile.empile(3);
    std::cout << pile.depile() << std::endl;
    std::cout << pile.depile() << std::endl;

    Pile pile2;
    pile2.empile(4);
    pile2.empile(5);
    std::cout << pile2.depile() << std::endl;

    Pile pile3(pile);
    std::cout << pile3.depile() << std::endl;




}