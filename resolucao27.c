#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Entre com o primeiro valor: ");
    scanf("%d", &num1);
    printf("Entre com o segundo valor: ");
    scanf("%d", &num2);
    printf("Entre com o terceiro valor: ");
    scanf("%d", &num3);

    // Check the sign of each number individually
    if (num1 == 0) {
        printf("O primeiro numero e zero.\n");
    } else if (num1 > 0) {
        printf("O primeiro numero e Positivo.\n");
    } else {
        printf("O primeiro numero e negativo.\n");
    }

    if (num2 == 0) {
        printf("O segundo numero e zero.\n");
    } else if (num2 > 0) {
        printf("O segundo numero e Positivo.\n");
    } else {
        printf("O segundo numero e negativo.\n");
    }

    if (num3 == 0) {
        printf("O terceiro numero e zero.\n");
    } else if (num3 > 0) {
        printf("O terceiro numero e Positivo.\n");
    } else {
        printf("O terceiro numero e negativo.\n");
    }

    return 0;
}
