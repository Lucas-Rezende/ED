#ifndef PILHA_ENCADEADA
#define PILHA_ENCADEADA

#include "tipo_celula.hpp"

class PilhaEncadeada
{
private:
    TipoCelula* topo;
    int tamanho;
public:
    PilhaEncadeada();
    ~PilhaEncadeada();
    bool EstaVazia();
    void Empilha(TipoItem item);
    TipoItem Desempilha();
    void LimparPilha();
};

#endif