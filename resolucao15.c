#include <stdio.h>
#include <math.h>

// Fun��o que exibe o menu e gerencia as opera��es
void exibirMenu() {
    int opcao;
    float num1, num2, resultado;

    // Exibe as op��es do menu
    printf("\n--- MENU DE OPERA��ES ---\n");
    printf("1. Soma\n");
    printf("2. Raiz Quadrada\n");
    printf("3. Finalizar\n");
    printf("--------------------------\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &opcao);

    // Usa switch-case para processar a op��o
    switch (opcao) {
        case 1:
            printf("Digite o primeiro n�mero: ");
            scanf("%f", &num1);
            printf("Digite o segundo n�mero: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);

            // Chama a si mesma para exibir o menu novamente
            exibirMenu();
            break;
        case 2:
            printf("Digite um n�mero: ");
            scanf("%f", &num1);
            if (num1 >= 0) {
                resultado = sqrt(num1);
                printf("A raiz quadrada de %.2f �: %.2f\n", num1, resultado);
            } else {
                printf("N�o � poss�vel calcular a raiz quadrada de um n�mero negativo.\n");
            }

            // Chama a si mesma para exibir o menu novamente
            exibirMenu();
            break;
        case 3:
            printf("Programa finalizado. Obrigado!\n");
            // N�o chama a si mesma, a recurs�o termina aqui
            break;
        default:
            printf("Op��o inv�lida. Por favor, escolha 1, 2 ou 3.\n");

            // Chama a si mesma para exibir o menu novamente
            exibirMenu();
            break;
    }
}

int main() {
    // Inicia o programa chamando a fun��o do menu pela primeira vez
    exibirMenu();
    return 0;
}
