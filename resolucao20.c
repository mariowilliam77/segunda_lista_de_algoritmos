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

    // Verifica se a � diferente de zero (condi��o para ser uma equa��o do 2� grau)
    if (a == 0) {
        printf("N�o � uma equa��o do 2� grau.\n");
        return 1;
    }

    // 2. Calcula o discriminante (delta)
    delta = b * b - 4 * a * c;

    // 3. Analisa o valor de delta para determinar o tipo de solu��o
    if (delta < 0) {
        printf("\nDelta < 0: A equa��o n�o possui ra�zes reais.\n");
    } else if (delta == 0) {
        // 4. Calcula a �nica raiz
        x1 = -b / (2 * a);
        printf("\nDelta = 0: A equa��o possui uma �nica raiz real.\n");
        printf("Raiz: x = %.2f\n", x1);
    } else { // delta > 0
        // 4. Calcula as duas ra�zes
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nDelta > 0: A equa��o possui duas ra�zes reais distintas.\n");
        printf("Primeira raiz: x1 = %.2f\n", x1);
        printf("Segunda raiz: x2 = %.2f\n", x2);
    }

    return 0;
}
