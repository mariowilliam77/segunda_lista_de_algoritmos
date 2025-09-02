#include <stdio.h>

int main() {
    int idade;

    // Solicita a idade da pessoa
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Usa a estrutura condicional para classificar a idade
    if (idade >= 0 && idade <= 2) {
        printf("Classificação: Recém-nascido\n");
    } else if (idade >= 3 && idade <= 11) {
        printf("Classificação: Criança\n");
    } else if (idade >= 12 && idade <= 19) {
        printf("Classificação: Adolescente\n");
    } else if (idade >= 20 && idade <= 55) {
        printf("Classificação: Adulto\n");
    } else if (idade > 55) {
        printf("Classificação: Idoso\n");
    } else {
        printf("Idade inválida.\n");
    }

    return 0;
}
