#ifndef PILE_H
#define PILE_H


class Pile
{
    int *m_pile = nullptr;
    int max_size;
    static int size;
    
    
    
    public:
        Pile(int);
        Pile();
        Pile(Pile &);
        ~Pile();
        void empile(int);
        int depile();
        int pleine();
        int vide();
};

#endif