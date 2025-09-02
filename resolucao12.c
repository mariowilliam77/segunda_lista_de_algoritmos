#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // 1. Recebe as três notas do aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // 2. Calcula a média aritmética
    media = (nota1 + nota2 + nota3) / 3;

    printf("\nA média do aluno é: %.2f\n", media);

    // 3. Imprime a mensagem com base na média
    if (media >= 7.0 && media <= 10.0) {
        printf("Mensagem: Aprovado\n");
    } else if (media >= 5.0 && media < 7.0) {
        printf("Mensagem: Exame\n");
    } else { // media < 5.0
        printf("Mensagem: Reprovado\n");
    }

    return 0;
}
