#include <stdio.h>

int main() {
    float notaLab, notaSemestral, notaFinal, mediaPonderada;

    // Solicita as três notas ao usuário
    printf("Digite a nota do trabalho de laboratório (0 a 10): ");
    scanf("%f", &notaLab);

    printf("Digite a nota da avaliação semestral (0 a 10): ");
    scanf("%f", &notaSemestral);

    printf("Digite a nota do exame final (0 a 10): ");
    scanf("%f", &notaFinal);

    // Calcula a média ponderada com os pesos
    mediaPonderada = (notaLab * 2 + notaSemestral * 3 + notaFinal * 5) / (2 + 3 + 5);

    // Imprime a média final
    printf("\nA média final do estudante é: %.2f\n", mediaPonderada);

    // Usa a estrutura condicional para determinar o conceito
    if (mediaPonderada >= 8.0 && mediaPonderada <= 10.0) {
        printf("Conceito: A\n");
    } else if (mediaPonderada >= 7.0 && mediaPonderada < 8.0) {
        printf("Conceito: B\n");
    } else if (mediaPonderada >= 6.0 && mediaPonderada < 7.0) {
        printf("Conceito: C\n");
    } else if (mediaPonderada >= 5.0 && mediaPonderada < 6.0) {
        printf("Conceito: D\n");
    } else { // Se a média for menor que 5.0
        printf("Conceito: E\n");
    }

    return 0;
}
