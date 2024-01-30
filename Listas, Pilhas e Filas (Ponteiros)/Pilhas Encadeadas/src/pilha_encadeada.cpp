#include "pilha_encadeada.hpp"
#include "tipo_celula.hpp"

PilhaEncadeada::PilhaEncadeada() {
    tamanho = 0;
    topo = nullptr;
}

PilhaEncadeada::~PilhaEncadeada() {
    LimparPilha();
}

bool PilhaEncadeada::EstaVazia() {
    return tamanho == 0;
}

void PilhaEncadeada::Empilha(TipoItem item) {
    // A princípio, criamos um ponteiro para variáveis do TipoCelula
    TipoCelula *novaCelula;

    // Em seguida, atribuimos o endereço desse novo TipoCelula ao novaCelula
    novaCelula = new TipoCelula();

    novaCelula->item = item;
    novaCelula->prox = topo;
    topo = novaCelula;
    tamanho++;
}

TipoItem PilhaEncadeada::Desempilha() {
    if(tamanho == 0)
        throw "A pilha está vazia! Não há nada para desempilhar.";
    
    TipoItem aux; TipoCelula *p;
    aux = topo->item;
    p = topo;
    topo = topo->prox;
    delete p;
    tamanho--;

    return aux;
}

void PilhaEncadeada::LimparPilha() {
    while (!EstaVazia())
    {
        Desempilha();
    }
}