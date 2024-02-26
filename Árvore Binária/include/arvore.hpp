#ifndef ARVORE
#define ARVORE

#include <iostream>

struct Node
{
    int item;
    Node* left;
    Node* right;
};

class Arvore
{
private:
    Node* raiz;
public:
    Arvore();
    ~Arvore();
    void Insere(int value);
    void InsereRecursivo(Node* &raizVigente, int item);
    void ApagaRecursivo(Node* &raizVigente);
    void PreOrdem();
    void InOrdem();
    void PosOrdem();
    void PreOrdemAux(Node* &raizVigente);
    void InOrdemAux(Node* &raizVigente);
    void PosOrdemAux(Node* &raizVigente);
    void Limpa();
};

#endif