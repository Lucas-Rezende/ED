#include "pilha.hpp"

int main(int argc, char const *argv[])
{
    Pilha p;
    int aux;
    do
    {
        std::cout << "0 - Sair\n1 - Criar pilha\n2 - Destruir pilha\n3 - Inserir elemento na pilha\n4 - Remover elemento da pilha\n5 - Imprimir pilha" << std::endl;
        std::cin >> aux;

        switch (aux)
        {
        case 1:
            std::cout << "Pilha criada com sucesso!" << std::endl;
            break;
        case 2:
            std::cout << "Pilha destruída com sucesso!" << std::endl;
            // O destrutor será chamado automaticamente quando 'p' sair do escopo.
            break;
        case 3:
            int temp_elemento;
            std::cout << "Digite o elemento a ser inserido no topo da pilha: ";
            std::cin >> temp_elemento;
            p.empilha(temp_elemento);
            std::cout << "Elemento adicionado com sucesso!" << std::endl;
            break;
        case 4:
            p.desempilha();
            std::cout << "Elemento removido do topo com sucesso!" << std::endl;
            break;
        case 5:
            p.imprimirPilha();
            std::cout << "Impressão finalizada." << std::endl;
            break;

        case 0:
            std::cout << "Encerrando o programa." << std::endl;
            break;

        default:
            std::cout << "Opção inválida. Tente novamente." << std::endl;
            break;
        }

    } while (aux != 0);

    return 0;
}