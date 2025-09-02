#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    // 1. Recebe os dois números e o símbolo da operação
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite a operação aritmética (+, -, *, /): ");
    scanf(" %c", &operacao); // O espaço antes de %c é para consumir o caractere de nova linha

    // 2. Usa a estrutura switch-case para realizar o cálculo
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("\nResultado da Adição: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("\nResultado da Subtração: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("\nResultado da Multiplicação: %.2f\n", resultado);
            break;
        case '/':
            // 3. Verifica se a divisão por zero é válida
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("\nResultado da Divisão: %.2f\n", resultado);
            } else {
                printf("\nErro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("\nErro: Operação inválida.\n");
            break;
    }

    return 0;
}
