#ifndef LISTAS
#define LISTAS

#include <iostream>

#define MAX 100 // Quantidade de elementos no array/arranjo

class Lista
{
private:
    int MinhaLista[MAX];
    int numElementos;
public:
    Lista();
    void iniciarLista();
    int tamanho();
    void imprimirElementos();
    int encontrarElemento(int elemento); // retorna, se estiver, a posição/chave do elemento procurado
    void inserirElementoInicio(int elemento);
    void inserirElementoFinal(int elemento);
    void removerElementoInicio();
    void removerElementoFinal();

    int getElemento(int posicao);
    void setElemento(int valor, int posicao);
};

#endif