#include "filas.hpp"

Fila::Fila() {
    tamanho = 0;
    primeiro = 0;
    ultimo = 0;
}

int Fila::GetTamanho() {
    return tamanho;
}

bool Fila::EstaVazia() {
    return tamanho == 0;
}

void Fila::Enfileirar(TipoItem item) {
    if (tamanho == MAX)
        throw "A fila está cheia";

    itensFila[ultimo] = item;
    
    // Fila Circular
    ultimo = (ultimo + 1) % MAX;

    tamanho++;
}

TipoItem Fila::Desenfileirar() {
    TipoItem aux;
    
    if (tamanho == 0)
        throw "A fila está vazia!";
    
    aux = itensFila[primeiro];

    // Fila Circular
    primeiro = (primeiro + 1) % MAX;

    tamanho--;

    return aux; // elemento removido
}

void Fila::ImprimirFila() {
    int aux = 0;
    while (aux != tamanho)
    {
        std::cout << itensFila[aux] << " ";
        aux++;
    }
    std::cout << std::endl;
}