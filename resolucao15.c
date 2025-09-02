#include <stdio.h>
#include <math.h>

// Função que exibe o menu e gerencia as operações
void exibirMenu() {
    int opcao;
    float num1, num2, resultado;

    // Exibe as opções do menu
    printf("\n--- MENU DE OPERAÇÕES ---\n");
    printf("1. Soma\n");
    printf("2. Raiz Quadrada\n");
    printf("3. Finalizar\n");
    printf("--------------------------\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Usa switch-case para processar a opção
    switch (opcao) {
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);

            // Chama a si mesma para exibir o menu novamente
            exibirMenu();
            break;
        case 2:
            printf("Digite um número: ");
            scanf("%f", &num1);
            if (num1 >= 0) {
                resultado = sqrt(num1);
                printf("A raiz quadrada de %.2f é: %.2f\n", num1, resultado);
            } else {
                printf("Não é possível calcular a raiz quadrada de um número negativo.\n");
            }

            // Chama a si mesma para exibir o menu novamente
            exibirMenu();
            break;
        case 3:
            printf("Programa finalizado. Obrigado!\n");
            // Não chama a si mesma, a recursão termina aqui
            break;
        default:
            printf("Opção inválida. Por favor, escolha 1, 2 ou 3.\n");

            // Chama a si mesma para exibir o menu novamente
            exibirMenu();
            break;
    }
}

int main() {
    // Inicia o programa chamando a função do menu pela primeira vez
    exibirMenu();
    return 0;
}
