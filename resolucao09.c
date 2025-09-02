#include <stdio.h>

int main() {
    float preco;
    int codigoOrigem;

    // Solicita o preço e o código de origem do produto
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigoOrigem);

    printf("\nPreço: R$ %.2f\n", preco);
    printf("Procedência: ");

    // Usa a estrutura switch-case para determinar a procedência
    switch (codigoOrigem) {
        case 1:
            printf("Sul\n");
            break;
        case 2:
            printf("Norte\n");
            break;
        case 3:
            printf("Leste\n");
            break;
        case 4:
            printf("Oeste\n");
            break;
        case 5:
        case 6:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
            printf("Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Sudeste\n");
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            printf("Centro-Oeste\n");
            break;
        default:
            printf("Código de origem inválido.\n");
            break;
    }

    return 0;
}
