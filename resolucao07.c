#include <stdio.h>

int main() {
// Declarações de variaveis
    int idade;

    // Entrada de dados
    printf("Entre com a sua idade: ");
    scanf("%d", &idade);

    // Processamento / Saída
    switch (idade) {
            case 5:
            case 6:
            case 7: printf("Infantil A"); break;
            case 8:
            case 9:
            case 10: printf("Infantil B"); break;
            case 11:
            case 12:
            case 13: printf("Juvenil A"); break;
            case 14:
            case 15:
            case 16:
            case 17: printf("Juvenil B"); break;

            default: printf("Senior");
        }
    return 0;
}
