#include <stdio.h>

int main() {
    int numero;

    // Solicita o n�mero ao usu�rio
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Usa a estrutura condicional para verificar a paridade
    if (numero % 2 == 0) {
        printf("O n�mero %d � PAR.\n", numero);
    } else {
        printf("O n�mero %d � �MPAR.\n", numero);
    }

    return 0;
}
