#include <stdio.h>

int main() {
    float notaLab, notaSemestral, notaFinal, mediaPonderada;

    // Solicita as tr�s notas ao usu�rio
    printf("Digite a nota do trabalho de laborat�rio (0 a 10): ");
    scanf("%f", &notaLab);

    printf("Digite a nota da avalia��o semestral (0 a 10): ");
    scanf("%f", &notaSemestral);

    printf("Digite a nota do exame final (0 a 10): ");
    scanf("%f", &notaFinal);

    // Calcula a m�dia ponderada com os pesos
    mediaPonderada = (notaLab * 2 + notaSemestral * 3 + notaFinal * 5) / (2 + 3 + 5);

    // Imprime a m�dia final
    printf("\nA m�dia final do estudante �: %.2f\n", mediaPonderada);

    // Usa a estrutura condicional para determinar o conceito
    if (mediaPonderada >= 8.0 && mediaPonderada <= 10.0) {
        printf("Conceito: A\n");
    } else if (mediaPonderada >= 7.0 && mediaPonderada < 8.0) {
        printf("Conceito: B\n");
    } else if (mediaPonderada >= 6.0 && mediaPonderada < 7.0) {
        printf("Conceito: C\n");
    } else if (mediaPonderada >= 5.0 && mediaPonderada < 6.0) {
        printf("Conceito: D\n");
    } else { // Se a m�dia for menor que 5.0
        printf("Conceito: E\n");
    }

    return 0;
}
