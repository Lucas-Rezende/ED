#include "lista.hpp"

Lista::Lista(){}

void Lista::iniciarLista() {
    numElementos = 0;
}

int Lista::tamanho() {
    return numElementos;
}

void Lista::imprimirElementos() {
    for (size_t i = 0; i < numElementos; i++)
    {
        std::cout << MinhaLista[i] << " ";
    }
    std::cout << std::endl;
}

int Lista::encontrarElemento(int elemento) {
    for (size_t i = 0; i < numElementos; i++)
    {
        if (elemento == MinhaLista[i])
        {
            return i;
        }
    }
    return -1;
}

void Lista::inserirElementoInicio(int elemento) {
    if (numElementos > MAX)
    {
        throw("ERRO: Lista Cheia!");
    } else
    {
        numElementos++;
        for (size_t i = numElementos-1; i > 0; i++)
        {
            MinhaLista[i] = MinhaLista[i - 1];
        }
        MinhaLista[0] = elemento;
    }
}

void Lista::inserirElementoFinal(int elemento) {
    if (numElementos <= MAX && numElementos >= 0)
    {
        MinhaLista[numElementos] = elemento;
        numElementos++;
    } else
    {
        std::cout << "A lista está cheia";
    }
}

void Lista::removerElementoInicio() {
    if (numElementos == 0)
    {
        throw("ERRO: Lista Vazia!");
    } else
    {
        for (size_t i = 0; i < numElementos; i++)
        {
            MinhaLista[i] = MinhaLista[i+1];
        }
        numElementos--;
    }
}

void Lista::removerElementoFinal() {
    if (numElementos == 0) {
        throw("ERRO: Lista Vazia!");
    }
    numElementos--;
}

int Lista::getElemento(int posicao) {
    if ((posicao > MAX) || (posicao <= 0))
    {
        throw("ERRO: Posição Inválida!");
    }
    return MinhaLista[posicao-1];
}

void Lista::setElemento(int valor, int posicao) {
    if ((posicao > MAX) || (posicao <= 0))
    {
        throw("ERRO: Posição Inválida!");
    }
    MinhaLista[posicao-1] = valor;
}