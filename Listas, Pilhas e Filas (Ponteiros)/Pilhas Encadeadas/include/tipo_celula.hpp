#ifndef TIPO_CELULA
#define TIPO_CELULA

struct TipoItem {
    int chave;

    TipoItem() : chave(0) {}
    TipoItem(int novaChave) : chave(novaChave) {}

    void setChave(int novaChave) {
        chave = novaChave;
    }

    int getChave() const {
        return chave;
    }
};

class TipoCelula
{
private:
public:
    TipoItem item;
    TipoCelula *prox;
    TipoCelula();
};

#endif