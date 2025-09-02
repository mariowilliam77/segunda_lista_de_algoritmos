#include <stdio.h>

int main() {
    int idade;

    // Solicita a idade da pessoa
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Usa a estrutura condicional para classificar a idade
    if (idade >= 0 && idade <= 2) {
        printf("Classifica��o: Rec�m-nascido\n");
    } else if (idade >= 3 && idade <= 11) {
        printf("Classifica��o: Crian�a\n");
    } else if (idade >= 12 && idade <= 19) {
        printf("Classifica��o: Adolescente\n");
    } else if (idade >= 20 && idade <= 55) {
        printf("Classifica��o: Adulto\n");
    } else if (idade > 55) {
        printf("Classifica��o: Idoso\n");
    } else {
        printf("Idade inv�lida.\n");
    }

    return 0;
}
