#include <stdio.h>

int main() {
    float numero1, numero2;

    // Solicita os dois n�meros ao usu�rio
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &numero2);

    // Usa a estrutura condicional para comparar os n�meros
    if (numero1 < numero2) {
        printf("O menor n�mero �: %.2f\n", numero1);
    } else if (numero2 < numero1) {
        printf("O menor n�mero �: %.2f\n", numero2);
    } else {
        printf("Os dois n�meros s�o iguais: %.2f\n", numero1);
    }

    return 0;
}
