#ifndef LISTA_ENCADEADA
#define LISTA_ENCADEADA

#include <iostream>

struct Node {
    int valor;
    Node* prox;

    Node(int valor) : valor(valor), prox(nullptr) {}
};

class ListaEncadeada
{
private:
    Node* primeiro;
    Node* ultimo;
    int tamanho;
public:
    ListaEncadeada();
    ~ListaEncadeada();

    int get(int p);
    int set(int valor, int p);
    bool estaVazia();
    void inserirElementoInicio(int valor);
    void inserirElementoFinal(int valor);
    void inserirElementoPosicao(int valor, int p);
    int removeInicio();
    int removeFinal();
    int removePosicao(int p);
    int pesquisa(int p);
    void ImprimeLista();
    void LimpaLista();
};

#endif