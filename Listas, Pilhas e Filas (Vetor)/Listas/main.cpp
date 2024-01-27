#include "lista.hpp"

int main(int argc, char const *argv[])
{
    int op;
    Lista l;

    std::cout << "1 - Lista com arranjos\n2 - Lista com apontadores" << std::endl;
    std::cin >> op;

    switch (op)
    {
    case 1:
        l.iniciarLista();
        int aux;
        do
        {
            std::cout << "0 - Sair\n1 - Imprimir tamanho da lista\n2 - Imprimir elementos\n3 - Encontrar elemento\n4 - Inserir elemento no início\n5 - Inserir elemento no final\n6 - Remover elemento do início\n7 - Remover elemento do final\n8 - get elemento\n9 - set elemento" << std::endl;
            std::cin >> aux;

            switch (aux)
            {
            case 1:
                std::cout << "Tamanho da lista: " << l.tamanho() << std::endl;
                break;
            case 2:
                std::cout << "Elementos da lista: ";
                l.imprimirElementos();
                break;
            case 3:
                int temp_elemento;
                std::cout << "Digite o elemento a ser encontrado: ";
                std::cin >> temp_elemento;
                std::cout << "Elemento encontrado na posição: " << l.encontrarElemento(temp_elemento) << std::endl;
                break;
            case 4:
                int temp_elemento_inicio;
                std::cout << "Digite o elemento a ser inserido no início: ";
                std::cin >> temp_elemento_inicio;
                l.inserirElementoInicio(temp_elemento_inicio);
                std::cout << "Elemento inserido no início." << std::endl;
                break;
            case 5:
                int temp_elemento_final;
                std::cout << "Digite o elemento a ser inserido no final: ";
                std::cin >> temp_elemento_final;
                l.inserirElementoFinal(temp_elemento_final);
                std::cout << "Elemento inserido no final." << std::endl;
                break;
            case 6:
                l.removerElementoInicio();
                std::cout << "Elemento removido do início." << std::endl;
                break;
            case 7:
                l.removerElementoFinal();
                std::cout << "Elemento removido do final." << std::endl;
                break;
            case 8:
                int pos;
                std::cout << "Digite a posição do elemento: ";
                std::cin >> pos;
                std::cout << "Elemento na posição " << pos << ": " << l.getElemento(pos) << std::endl;
                break;
            case 9:
                int v, pos_set;
                std::cout << "Digite o valor: ";
                std::cin >> v;
                std::cout << "Digite a posição: ";
                std::cin >> pos_set;
                l.setElemento(v, pos_set);
                std::cout << "Elemento na posição " << pos_set << " atualizado." << std::endl;
                break;

            case 0:
                std::cout << "Encerrando o programa." << std::endl;
                break;

            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
                break;
            }

        } while (aux != 0);
        break;

    case 2:
        break;

    default:
        break;
    }
    return 0;
}
