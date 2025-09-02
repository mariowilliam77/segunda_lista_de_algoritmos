#include <stdio.h>

int main() {
    float precoNormal, precoFinal;
    int codigoCondicao;

    // Solicita o preço do produto e o código de pagamento
    printf("Digite o preço normal de etiqueta do produto: R$ ");
    scanf("%f", &precoNormal);

    printf("Escolha a condição de pagamento:\n");
    printf("1 - À vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - À vista no cartão de crédito (5%% de desconto)\n");
    printf("3 - Em 2 vezes (preço normal)\n");
    printf("4 - Em 3 vezes (preço normal mais juros de 10%%)\n");
    printf("Digite o código da condição de pagamento: ");
    scanf("%d", &codigoCondicao);

    // Usa a estrutura switch-case para calcular o preço final
    switch (codigoCondicao) {
        case 1:
            precoFinal = precoNormal * 0.90; // 10% de desconto
            printf("\nOpção: À vista em dinheiro ou cheque\n");
            printf("Você recebeu 10%% de desconto.\n");
            break;
        case 2:
            precoFinal = precoNormal * 0.95; // 5% de desconto
            printf("\nOpção: À vista no cartão de crédito\n");
            printf("Você recebeu 5%% de desconto.\n");
            break;
        case 3:
            precoFinal = precoNormal; // Preço normal sem juros
            printf("\nOpção: Em 2 vezes\n");
            printf("Não há desconto ou acréscimo.\n");
            break;
        case 4:
            precoFinal = precoNormal * 1.10; // 10% de juros
            printf("\nOpção: Em 3 vezes\n");
            printf("Houve um acréscimo de 10%%.\n");
            break;
        default:
            printf("\nCódigo de condição de pagamento inválido.\n");
            return 1; // Encerra o programa com erro
    }

    // Imprime o valor final a ser pago
    printf("O valor a ser pago é: R$ %.2f\n", precoFinal);

    return 0;
}
