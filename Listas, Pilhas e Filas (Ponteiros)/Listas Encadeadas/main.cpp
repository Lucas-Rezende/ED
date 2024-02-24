#include "lista_encadeada.hpp"
#include <iostream>

void exibirMenu() {
    std::cout << "Escolha uma opção:" << std::endl;
    std::cout << "1. Inserir elemento no início" << std::endl;
    std::cout << "2. Inserir elemento no final" << std::endl;
    std::cout << "3. Inserir elemento em uma posição específica" << std::endl;
    std::cout << "4. Acessar elemento em uma posição específica" << std::endl;
    std::cout << "5. Modificar elemento em uma posição específica" << std::endl;
    std::cout << "6. Verificar se a lista está vazia" << std::endl;
    std::cout << "7. Imprimir lista" << std::endl;
    std::cout << "8. Sair" << std::endl;
    std::cout << "Opção: ";
}

int main() {
    ListaEncadeada lista;

    int opcao;
    do {
        exibirMenu();
        std::cin >> opcao;

        switch (opcao) {
            case 1: {
                int valor;
                std::cout << "Digite o valor a ser inserido no início: ";
                std::cin >> valor;
                lista.inserirElementoInicio(valor);
                break;
            }
            case 2: {
                int valor;
                std::cout << "Digite o valor a ser inserido no final: ";
                std::cin >> valor;
                lista.inserirElementoFinal(valor);
                break;
            }
            case 3: {
                int valor, posicao;
                std::cout << "Digite o valor a ser inserido: ";
                std::cin >> valor;
                std::cout << "Digite a posição para inserção: ";
                std::cin >> posicao;
                lista.inserirElementoPosicao(valor, posicao);
                break;
            }
            case 4: {
                int posicao;
                std::cout << "Digite a posição para acessar o elemento: ";
                std::cin >> posicao;
                try {
                    std::cout << "Elemento na posição " << posicao << ": " << lista.get(posicao) << std::endl;
                } catch (const char* msg) {
                    std::cerr << "Erro: " << msg << std::endl;
                }
                break;
            }
            case 5: {
                int valor, posicao;
                std::cout << "Digite o valor a ser inserido: ";
                std::cin >> valor;
                std::cout << "Digite a posição para modificar o elemento: ";
                std::cin >> posicao;
                try {
                    std::cout << "Valor antigo: " << lista.set(valor, posicao) << std::endl;
                } catch (const char* msg) {
                    std::cerr << "Erro: " << msg << std::endl;
                }
                break;
            }
            case 6: {
                if (lista.estaVazia()) {
                    std::cout << "A lista está vazia" << std::endl;
                } else {
                    std::cout << "A lista não está vazia" << std::endl;
                }
                break;
            }
            case 7: {
                std::cout << "Lista encadeada: ";
                lista.ImprimeLista();
                std::cout << std::endl;
                break;
            }
            case 8:
                std::cout << "Encerrando o programa..." << std::endl;
                break;
            default:
                std::cout << "Opção inválida! Tente novamente." << std::endl;
        }
    } while (opcao != 8);

    return 0;
}