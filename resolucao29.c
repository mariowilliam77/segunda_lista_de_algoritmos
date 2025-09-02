#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    // Recebe os quatro números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    printf("Digite o quarto número: ");
    scanf("%d", &num4);

    printf("\nOs números divisíveis por 2 e 3 são:\n");

    // Verifica o primeiro número
    if (num1 % 2 == 0 && num1 % 3 == 0) {
        printf("%d\n", num1);
    }

    // Verifica o segundo número
    if (num2 % 2 == 0 && num2 % 3 == 0) {
        printf("%d\n", num2);
    }

    // Verifica o terceiro número
    if (num3 % 2 == 0 && num3 % 3 == 0) {
        printf("%d\n", num3);
    }

    // Verifica o quarto número
    if (num4 % 2 == 0 && num4 % 3 == 0) {
        printf("%d\n", num4);
    }

    return 0;
}
