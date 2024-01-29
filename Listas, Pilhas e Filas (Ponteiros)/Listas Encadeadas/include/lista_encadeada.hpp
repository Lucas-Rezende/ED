#ifndef LISTA_ENCADEADA
#define LISTA_ENCADEADA

class ListaEncadeada
{
private:
    int* primeiro;
    int* ultimo;
    int* Posiciona(int pos, bool antes);
public:
    ListaEncadeada();
    ~ListaEncadeada();

    int get(int posicao);
    int set(int valor, int posicao);
    void inserirElementoInicio(int valor);
    void inserirElementoFinal(int valor);
    void inserirElementoPosicao(int valor, int posicao);
    int removeInicio();
    int removeFinal();
    int removePosicao(int posicao);
    int pesquisa(int posicao);
    void ImprimeLista();
    void LimpaLista();
};

#endif