#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    // 1. Recebe os dois n�meros e o s�mbolo da opera��o
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    printf("Digite a opera��o aritm�tica (+, -, *, /): ");
    scanf(" %c", &operacao); // O espa�o antes de %c � para consumir o caractere de nova linha

    // 2. Usa a estrutura switch-case para realizar o c�lculo
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("\nResultado da Adi��o: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("\nResultado da Subtra��o: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("\nResultado da Multiplica��o: %.2f\n", resultado);
            break;
        case '/':
            // 3. Verifica se a divis�o por zero � v�lida
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("\nResultado da Divis�o: %.2f\n", resultado);
            } else {
                printf("\nErro: Divis�o por zero n�o � permitida.\n");
            }
            break;
        default:
            printf("\nErro: Opera��o inv�lida.\n");
            break;
    }

    return 0;
}
