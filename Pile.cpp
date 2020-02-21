#include "Pile.hpp"
#include<iostream>
#include<cstring>

static int size;

Pile::Pile(int n)
{
    m_pile = (int *)malloc(sizeof(int) * n);
}

Pile::Pile()
{
    m_pile = (int *)malloc(sizeof(int) * 20);
}

Pile::Pile(Pile &pile_const)
{
    m_pile = (int *)malloc(sizeof(pile_const.m_pile));
    m_pile = pile_const.m_pile;
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
    m_pile[size] = -1;
    size--;
    return last_element;
}

int Pile::pleine()
{

}