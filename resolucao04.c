#include <stdio.h>

int main() {
    int idade;

    // Solicita que o usu�rio digite a idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Usa uma estrutura condicional para verificar a maioridade
    if (idade >= 18) {
        printf("Voc� � maior de idade.\n");
    } else {
        printf("Voc� n�o � maior de idade.\n");
    }

    return 0;
}
