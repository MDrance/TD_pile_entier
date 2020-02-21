#include "Pile.hpp"
#include<iostream>
#include<cstring>

static int size;
int max_size;

//pipou

Pile::Pile(int n)
{
    m_pile = (int *)malloc(sizeof(int) * n);
    max_size = n;
}

Pile::Pile()
{
    m_pile = (int *)malloc(sizeof(int) * 20);
    max_size = 20;
}

Pile::Pile(Pile &pile_const)
{
    m_pile = (int *)malloc(sizeof(pile_const.m_pile));
    m_pile = pile_const.m_pile;
    max_size = pile_const.max_size;
}

Pile::~Pile()
{
    free(m_pile);
}

void Pile::empile(int a)
{
    m_pile[size + 1] = a;
    size++;   
}

int Pile::depile()
{
    int last_element = m_pile[size];
    m_pile[size] = 0;
    size--;
    return last_element;
}

int Pile::pleine()
{
    if (size == max_size)
    {
        return 1;
    }
    return 0;
}

int Pile::vide()
{
    if (size == 0)
    {
        return 1;
    }
    return 0;
}

