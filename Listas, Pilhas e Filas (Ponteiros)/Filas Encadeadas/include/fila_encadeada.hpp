#ifndef FILA_ENCADEADA
#define FILA_ENCADEADA

#include <stdio.h>

typedef struct No
{
    int valor;
    No *prox;

    No(int valor) : valor(valor), prox(nullptr) {}
};


class FilaEncadeada
{
private:
    No *inicio;
    No *fim;
public:
    FilaEncadeada();
    ~FilaEncadeada();
    bool estaVazia();
    void enfileirar(int valor);
    int desenfileirar();
    void limparFila();
};

#endif