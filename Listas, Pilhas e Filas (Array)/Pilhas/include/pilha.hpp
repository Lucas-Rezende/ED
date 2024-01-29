#ifndef PILHA
#define PILHA

#include <iostream>

#define MAX 100
typedef int TipoItem;

class Pilha
{
private:
    int tamanho;
    TipoItem itens[MAX];
public:
    Pilha();
    ~Pilha();
    bool estaVazia();
    void empilha(TipoItem item);
    TipoItem desempilha();
    void imprimirPilha();
};

#endif