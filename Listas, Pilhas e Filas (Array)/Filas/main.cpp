#include <iostream>
#include "filas.hpp"

int main() {
    Fila fila;

    int opcao;

    do {
        std::cout << "\nEscolha uma opcao:\n";
        std::cout << "1. Sair\n";
        std::cout << "2. Obter Tamanho da Fila\n";
        std::cout << "3. Verificar se a Fila esta Vazia\n";
        std::cout << "4. Enfileirar Elemento\n";
        std::cout << "5. Desenfileirar Elemento\n";
        std::cout << "6. Imprimir Fila\n";
        std::cout << "Digite o numero da opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                std::cout << "Saindo do programa.\n";
                break;

            case 2:
                std::cout << "Tamanho da Fila: " << fila.GetTamanho() << std::endl;
                break;

            case 3:
                if (fila.EstaVazia()) {
                    std::cout << "A Fila esta vazia.\n";
                } else {
                    std::cout << "A Fila nao esta vazia.\n";
                }
                break;

            case 4:
                try {
                    int item;
                    std::cout << "Digite o elemento a ser enfileirado: ";
                    std::cin >> item;
                    fila.Enfileirar(item);
                    std::cout << "Elemento enfileirado com sucesso.\n";
                } catch (const char* msg) {
                    std::cerr << "Erro: " << msg << std::endl;
                }
                break;

            case 5:
                try {
                    TipoItem desenfileirado = fila.Desenfileirar();
                    std::cout << "Elemento desenfileirado: " << desenfileirado << std::endl;
                } catch (const char* msg) {
                    std::cerr << "Erro: " << msg << std::endl;
                }
                break;

            case 6:
                std::cout << "Conteudo da Fila: ";
                fila.ImprimirFila();
                break;

            default:
                std::cout << "Opcao invalida. Tente novamente.\n";
                break;
        }
    } while (opcao != 1);

    return 0;
}