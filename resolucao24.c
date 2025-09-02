#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Recebe os três números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    printf("\nOs números em ordem crescente são: ");

    // Usa estruturas condicionais para encontrar a ordem correta
    if (num1 <= num2 && num1 <= num3) {
        if (num2 <= num3) {
            printf("%d, %d, %d\n", num1, num2, num3);
        } else {
            printf("%d, %d, %d\n", num1, num3, num2);
        }
    } else if (num2 <= num1 && num2 <= num3) {
        if (num1 <= num3) {
            printf("%d, %d, %d\n", num2, num1, num3);
        } else {
            printf("%d, %d, %d\n", num2, num3, num1);
        }
    } else { // num3 é o menor
        if (num1 <= num2) {
            printf("%d, %d, %d\n", num3, num1, num2);
        } else {
            printf("%d, %d, %d\n", num3, num2, num1);
        }
    }

    return 0;
}
