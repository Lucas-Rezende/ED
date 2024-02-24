#include "lista_encadeada.hpp"

ListaEncadeada::ListaEncadeada()
{
    primeiro = nullptr;
    ultimo = nullptr;
    tamanho = 0;
}

ListaEncadeada::~ListaEncadeada()
{
    Node *atual = primeiro;
    while (atual != nullptr)
    {
        Node *proximo = atual->prox;
        delete atual;
        atual = proximo;
    }
    tamanho = 0;
}

int ListaEncadeada::get(int p)
{
    if (p < 0 || p >= tamanho)
    {
        throw("Posição inválida!");
    }

    Node *temp = primeiro;
    for (size_t i = 0; i < p; i++)
    {
        temp = temp->prox;
    }
    return temp->valor;
}

int ListaEncadeada::set(int valor, int p)
{
    if (p < 0 || p >= tamanho)
    {
        throw("Posição inválida!");
    }
    else
    {
        int i;
        Node *temp = primeiro;
        for (i = 0; i < p; i++)
        {
            temp = temp->prox;
        }
        temp->valor = valor;
        return temp->valor;
    }
}

bool ListaEncadeada::estaVazia()
{
    return tamanho == 0;
}

void ListaEncadeada::inserirElementoInicio(int valor)
{
    Node *novoNo = new Node(valor);
    if (estaVazia())
    {
        primeiro = novoNo;
        ultimo = primeiro; // afinal, há apenas um elemento
    }
    else
    {
        novoNo->prox = primeiro;
        primeiro = novoNo;
    }
    tamanho++;
}

void ListaEncadeada::inserirElementoFinal(int valor)
{
    Node *novoNo = new Node(valor);
    if (estaVazia())
    {
        primeiro = novoNo;
        ultimo = primeiro;
    }
    else
    {
        Node *temp = primeiro;
        for (size_t i = 0; i < tamanho - 1; i++)
        {
            temp = temp->prox;
        }
        temp->prox = novoNo;
        ultimo = novoNo;
    }
    tamanho++;
}

void ListaEncadeada::inserirElementoPosicao(int valor, int p)
{
    Node *novoNo = new Node(valor);

    if ((p > tamanho + 1) || (p <= 0))
    {
        throw("Posição inválida!");
    }
    if (p == 1)
    {
        novoNo->prox = primeiro;
        primeiro = novoNo;
        if (tamanho == 0)
        {
            ultimo = novoNo;
        }
    }
    else
    {
        Node *temp = primeiro;
        for (size_t i = 1; i < p - 1; i++)
        {
            temp = temp->prox;
        }
        novoNo->prox = temp->prox;
        temp->prox = novoNo;
        if (p == tamanho + 1)
        {
            ultimo = novoNo;
        }
    }
    tamanho++;
}

int ListaEncadeada::removeInicio()
{
    if (estaVazia())
    {
        throw("A fila está vazia!");
    }

    Node *tempNo;
    tempNo = primeiro;
    primeiro = primeiro->prox;
    tamanho--;

    if (primeiro->prox == NULL)
    {
        ultimo = nullptr;
    }

    int aux = tempNo->valor;
    delete tempNo;

    return aux;
}

int ListaEncadeada::removeFinal()
{
    int aux;
    Node *tempNo = primeiro;

    if (estaVazia())
    {
        throw("A lista está vazia!");
    }

    if (primeiro->prox == nullptr)
    {
        aux = primeiro->valor;
        delete primeiro;
        primeiro = ultimo = nullptr;
    }
    else
    {
        int i = 0;
        while (i < (tamanho - 1))
        {
            tempNo = tempNo->prox;
            i++;
        }
        aux = ultimo->valor;
        delete ultimo;
        ultimo = tempNo;
        ultimo->prox = nullptr;
    }

    tamanho--;
    return aux;
}

int ListaEncadeada::removePosicao(int p)
{
    int i = 0;

    if (estaVazia() || p > tamanho || p < 0)
    {
        throw("Essa posição é inválida!");
    }

    Node *tempNo = primeiro;
    Node *aux;
    int elemento;

    while (i < p - 1)
    {
        tempNo = tempNo->prox;
        i++;
    }

    aux = tempNo->prox;
    tempNo->prox = aux->prox;
    tamanho--;
    elemento = aux->valor;
    delete aux;

    if (tempNo->prox == NULL)
    {
        ultimo = tempNo;
    }

    return elemento;
}

int ListaEncadeada::pesquisa(int p)
{
    int i = 0;
    Node *tempNo = primeiro;

    if (estaVazia() || p < 0 || p >= tamanho)
    {
        throw("Posição inválida!");
    }

    while (i < p)
    {
        tempNo = tempNo->prox;
        i++;
    }

    return tempNo->valor;
}

void ListaEncadeada::ImprimeLista()
{
    Node* tempNo = primeiro;
    if (estaVazia())
    {
        throw("A fila está vazia!");
    }

    for (size_t i = 0; i < tamanho; i++)
    {
        std::cout << tempNo->valor << " ";
        tempNo = tempNo->prox;
    }
}