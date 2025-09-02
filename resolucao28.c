#include <stdio.h>

int main() {
    int ladoA, ladoB, ladoC;

    // Recebe os tr�s valores dos lados
    printf("Digite o comprimento do lado A: ");
    scanf("%d", &ladoA);

    printf("Digite o comprimento do lado B: ");
    scanf("%d", &ladoB);

    printf("Digite o comprimento do lado C: ");
    scanf("%d", &ladoC);

    // 1. Verifica se a condi��o de exist�ncia de um tri�ngulo � satisfeita
    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) {
        printf("\nOs lados formam um tri�ngulo.\n");

        // 2. Classifica o tipo de tri�ngulo
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Tipo: Tri�ngulo Equil�tero\n");
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("Tipo: Tri�ngulo Is�sceles\n");
        } else {
            printf("Tipo: Tri�ngulo Escaleno\n");
        }
    } else {
        printf("\nOs lados n�o formam um tri�ngulo.\n");
    }

    return 0;
}
