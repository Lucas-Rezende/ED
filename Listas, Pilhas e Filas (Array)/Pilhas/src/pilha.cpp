#include "pilha.hpp"

Pilha::Pilha() {
    tamanho = 0;
}

Pilha::~Pilha() {
    tamanho = 0;
}

bool Pilha::estaVazia() {
    if (tamanho == 0) return true;
    else return false;   
}

void Pilha::empilha(TipoItem item) {
    if (tamanho == MAX) throw("A pilha está cheia!");
    itens[tamanho] = item;
    tamanho++;
}

TipoItem Pilha::desempilha() {
    if (estaVazia()) throw("A piilha está vazia!");

    TipoItem aux;
    aux = itens[tamanho - 1];
    tamanho--;
    return aux;
}

void Pilha::imprimirPilha() {
    if (tamanho == 0) throw "A pilha está vazia";
    
    int i = 0;
    while (i != tamanho)
    {
        std::cout << itens[i] << " ";
        i++;
    }
    std::cout << std::endl;
}