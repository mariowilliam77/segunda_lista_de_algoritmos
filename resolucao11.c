#include <stdio.h>

int main() {
    float numero1, numero2;

    // Solicita os dois números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    // Usa a estrutura condicional para comparar os números
    if (numero1 < numero2) {
        printf("O menor número é: %.2f\n", numero1);
    } else if (numero2 < numero1) {
        printf("O menor número é: %.2f\n", numero2);
    } else {
        printf("Os dois números são iguais: %.2f\n", numero1);
    }

    return 0;
}
