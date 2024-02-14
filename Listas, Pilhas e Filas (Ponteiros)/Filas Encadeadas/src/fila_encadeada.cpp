#include "fila_encadeada.hpp"

FilaEncadeada::FilaEncadeada() {
    inicio = nullptr;
    fim = nullptr;
}

FilaEncadeada::~FilaEncadeada() {
    while (inicio != nullptr)
    {
        No* temp = inicio;
        inicio = inicio->prox;
        delete temp;
    }
}

bool FilaEncadeada::estaVazia() {
    return inicio == nullptr;
}

void FilaEncadeada::enfileirar(int valor) {
    No* newNo = new No(valor);

    if (estaVazia()) {
        inicio = newNo;
        fim = newNo;
    }
    else {
        fim->prox = newNo;
        fim = newNo;
    }
}

int FilaEncadeada::desenfileirar() {
    if (estaVazia())
        throw("A fila está vazia!");

    No* temp = inicio->prox;
    int tempValue = temp->valor;
    inicio = temp;

    delete temp;

    if (inicio == nullptr)
        fim = nullptr;

    return tempValue;
}