#include "arvore.hpp"

Arvore::Arvore()
{
    raiz = nullptr;
}

Arvore::~Arvore()
{
    Limpa();
}

void Arvore::Insere(int value)
{
    InsereRecursivo(raiz, value);
}

void Arvore::InsereRecursivo(Node *&raizVigente, int item)
{
    if (raizVigente == nullptr)
    {
        raizVigente = new Node();
        raizVigente->item = item;
    }
    else
    {
        if (item < raizVigente->item)
        {
            InsereRecursivo(raizVigente->left, item);
        }
        else
        {
            InsereRecursivo(raizVigente->right, item);
        }
    }
}

void Arvore::ApagaRecursivo(Node *&raizVigente)
{
    if (raizVigente != nullptr)
    {
        ApagaRecursivo(raizVigente->left);
        ApagaRecursivo(raizVigente->right);
        delete raizVigente;
    }
}

void Arvore::PreOrdem()
{
    PreOrdemAux(raiz);
}

void Arvore::InOrdem()
{
    InOrdemAux(raiz);
}

void Arvore::PosOrdem()
{
    PosOrdemAux(raiz);
}

void Arvore::PreOrdemAux(Node *&raizVigente)
{
    if (raizVigente != nullptr)
    {
        // Visita o nó e depois os filhos da esquerda e da direita
        std::cout << raizVigente->item << " ";
        PreOrdemAux(raizVigente->left);
        PreOrdemAux(raizVigente->right);
    }
}

void Arvore::InOrdemAux(Node *&raizVigente)
{
    if (raizVigente != nullptr)
    {
        // Visita o filho da esquerda, o nó, e depois o filho da direita
        InOrdemAux(raizVigente->left);
        std::cout << raizVigente->item << " ";
        InOrdemAux(raizVigente->right);
    }
}

void Arvore::PosOrdemAux(Node *&raizVigente)
{
    if (raizVigente != nullptr)
    {
        // Visita recursivamente as árvores da esquerda e da direita e depois imprime o item
        PosOrdemAux(raizVigente->left);
        PosOrdemAux(raizVigente->right);
        std::cout << raizVigente->item << " ";
    }
}

void Arvore::Limpa()
{
    ApagaRecursivo(raiz);
    raiz = nullptr;
}