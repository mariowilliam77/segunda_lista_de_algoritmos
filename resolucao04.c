#include <stdio.h>

int main() {
    int idade;

    // Solicita que o usuário digite a idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Usa uma estrutura condicional para verificar a maioridade
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você não é maior de idade.\n");
    }

    return 0;
}
