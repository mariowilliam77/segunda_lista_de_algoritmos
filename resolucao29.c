#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    // Recebe os quatro n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    printf("Digite o quarto n�mero: ");
    scanf("%d", &num4);

    printf("\nOs n�meros divis�veis por 2 e 3 s�o:\n");

    // Verifica o primeiro n�mero
    if (num1 % 2 == 0 && num1 % 3 == 0) {
        printf("%d\n", num1);
    }

    // Verifica o segundo n�mero
    if (num2 % 2 == 0 && num2 % 3 == 0) {
        printf("%d\n", num2);
    }

    // Verifica o terceiro n�mero
    if (num3 % 2 == 0 && num3 % 3 == 0) {
        printf("%d\n", num3);
    }

    // Verifica o quarto n�mero
    if (num4 % 2 == 0 && num4 % 3 == 0) {
        printf("%d\n", num4);
    }

    return 0;
}
