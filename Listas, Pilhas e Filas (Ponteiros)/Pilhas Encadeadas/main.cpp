#include <iostream>
#include "pilha_encadeada.hpp"

int main() {
    PilhaEncadeada pilha;

    int opcao;

    do {
        std::cout << "\nEscolha uma opção:\n";
        std::cout << "1. Empilhar\n";
        std::cout << "2. Desempilhar\n";
        std::cout << "3. Verificar se a pilha está vazia\n";
        std::cout << "4. Limpar a pilha\n";
        std::cout << "0. Sair\n";
        std::cin >> opcao;

        switch (opcao) {
            case 1: {
                int valor;
                std::cout << "Digite o valor a ser empilhado: ";
                std::cin >> valor;

                TipoItem item;
                item.chave = valor;
                pilha.Empilha(item);

                std::cout << "Elemento empilhado com sucesso!\n";
                break;
            }

            case 2: {
                try {
                    TipoItem desempilhado = pilha.Desempilha();
                    std::cout << "Desempilhado: " << desempilhado.chave << "\n";
                } catch (const std::exception& e) {
                    std::cerr << "Erro: " << e.what() << "\n";
                }
                break;
            }

            case 3:
                if (pilha.EstaVazia())
                    std::cout << "A pilha está vazia.\n";
                else
                    std::cout << "A pilha não está vazia.\n";
                break;

            case 4:
                pilha.LimparPilha();
                std::cout << "Pilha limpa.\n";
                break;

            case 0:
                std::cout << "Encerrando o programa.\n";
                break;

            default:
                std::cout << "Opção inválida. Tente novamente.\n";
                break;
        }

    } while (opcao != 0);

    return 0;
}