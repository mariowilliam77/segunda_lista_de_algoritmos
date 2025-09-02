#include <stdio.h>

int main() {
    int ladoA, ladoB, ladoC;

    // Recebe os três valores dos lados
    printf("Digite o comprimento do lado A: ");
    scanf("%d", &ladoA);

    printf("Digite o comprimento do lado B: ");
    scanf("%d", &ladoB);

    printf("Digite o comprimento do lado C: ");
    scanf("%d", &ladoC);

    // 1. Verifica se a condição de existência de um triângulo é satisfeita
    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) {
        printf("\nOs lados formam um triângulo.\n");

        // 2. Classifica o tipo de triângulo
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Tipo: Triângulo Equilátero\n");
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("Tipo: Triângulo Isósceles\n");
        } else {
            printf("Tipo: Triângulo Escaleno\n");
        }
    } else {
        printf("\nOs lados não formam um triângulo.\n");
    }

    return 0;
}
