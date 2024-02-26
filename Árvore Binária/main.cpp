#include <iostream>
#include "arvore.hpp"

void menu() {
    std::cout << "\n===== Menu =====\n";
    std::cout << "1. Inserir elemento\n";
    std::cout << "2. Realizar travessia em ordem\n";
    std::cout << "3. Realizar travessia pré-ordem\n";
    std::cout << "4. Realizar travessia pós-ordem\n";
    std::cout << "5. Limpar árvore\n";
    std::cout << "6. Sair\n";
}

int main() {
    Arvore minhaArvore;
    int escolha;
    int elemento;

    do {
        menu();
        std::cout << "\nEscolha uma opção: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                std::cout << "Digite o elemento a ser inserido: ";
                std::cin >> elemento;
                minhaArvore.Insere(elemento);
                break;
            case 2:
                std::cout << "Travessia Em-Ordem: ";
                minhaArvore.InOrdem();
                std::cout << std::endl;
                break;
            case 3:
                std::cout << "Travessia Pré-Ordem: ";
                minhaArvore.PreOrdem();
                std::cout << std::endl;
                break;
            case 4:
                std::cout << "Travessia Pós-Ordem: ";
                minhaArvore.PosOrdem();
                std::cout << std::endl;
                break;
            case 5:
                minhaArvore.Limpa();
                std::cout << "Árvore limpa!\n";
                break;
            case 6:
                std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Opção inválida!\n";
                break;
        }
    } while (escolha != 6);

    return 0;
}
