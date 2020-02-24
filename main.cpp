#include"Pile.hpp"
#include<iostream>

int main()
{
    Pile pile(3);
    pile.empile(1);
    pile.empile(2);
    pile.empile(3);
    std::cout << pile.pleine() << std::endl;
    std::cout << pile.depile() << std::endl;
    std::cout << pile.depile() << std::endl;
    std::cout << pile.pleine() << std::endl;



    // Pile pile2;
    // std::cout << pile2.vide() << std::endl;
    // pile2.empile(4);
    // pile2.empile(5);
    // std::cout << pile2.depile() << std::endl;
    // std::cout << pile2.vide() << std::endl;
    // std::cout << pile2.depile() << std::endl;
    // std::cout << pile2.vide() << std::endl;



    Pile pile3(pile);
    std::cout << pile3.depile() << std::endl;

}
