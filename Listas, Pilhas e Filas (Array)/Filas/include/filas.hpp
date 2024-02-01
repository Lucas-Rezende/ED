#ifndef FILA
#define FILA

#define MAX 100
typedef int TipoItem;

#include <iostream>

class Fila
{
private:
    TipoItem primeiro;
    TipoItem ultimo;
    int tamanho;
    TipoItem itensFila[MAX];
public:
    Fila();
    int GetTamanho();
    bool EstaVazia();
    void Enfileirar(TipoItem item);
    TipoItem Desenfileirar();
    void LimparFila();
    void ImprimirFila();
};

#endif