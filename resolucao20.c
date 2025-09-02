#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    // 1. Recebe os coeficientes
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // Verifica se a é diferente de zero (condição para ser uma equação do 2º grau)
    if (a == 0) {
        printf("Não é uma equação do 2º grau.\n");
        return 1;
    }

    // 2. Calcula o discriminante (delta)
    delta = b * b - 4 * a * c;

    // 3. Analisa o valor de delta para determinar o tipo de solução
    if (delta < 0) {
        printf("\nDelta < 0: A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        // 4. Calcula a única raiz
        x1 = -b / (2 * a);
        printf("\nDelta = 0: A equação possui uma única raiz real.\n");
        printf("Raiz: x = %.2f\n", x1);
    } else { // delta > 0
        // 4. Calcula as duas raízes
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nDelta > 0: A equação possui duas raízes reais distintas.\n");
        printf("Primeira raiz: x1 = %.2f\n", x1);
        printf("Segunda raiz: x2 = %.2f\n", x2);
    }

    return 0;
}
