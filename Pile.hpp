#ifndef PILE_H
#define PILE_H


class Pile
{
    static int size;
    int *m_pile = nullptr;
    int max_size;
    
    
    
    public:
        Pile(int);
        Pile();
        Pile(Pile &);
        ~Pile();
        void empile(int);
        int depile();
        int pleine();
        int vide();
        int get_max_size();
};

#endif