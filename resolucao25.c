#include <stdio.h>

int main() {
    float precoNormal, precoFinal;
    int codigoCondicao;

    // Solicita o pre�o do produto e o c�digo de pagamento
    printf("Digite o pre�o normal de etiqueta do produto: R$ ");
    scanf("%f", &precoNormal);

    printf("Escolha a condi��o de pagamento:\n");
    printf("1 - � vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - � vista no cart�o de cr�dito (5%% de desconto)\n");
    printf("3 - Em 2 vezes (pre�o normal)\n");
    printf("4 - Em 3 vezes (pre�o normal mais juros de 10%%)\n");
    printf("Digite o c�digo da condi��o de pagamento: ");
    scanf("%d", &codigoCondicao);

    // Usa a estrutura switch-case para calcular o pre�o final
    switch (codigoCondicao) {
        case 1:
            precoFinal = precoNormal * 0.90; // 10% de desconto
            printf("\nOp��o: � vista em dinheiro ou cheque\n");
            printf("Voc� recebeu 10%% de desconto.\n");
            break;
        case 2:
            precoFinal = precoNormal * 0.95; // 5% de desconto
            printf("\nOp��o: � vista no cart�o de cr�dito\n");
            printf("Voc� recebeu 5%% de desconto.\n");
            break;
        case 3:
            precoFinal = precoNormal; // Pre�o normal sem juros
            printf("\nOp��o: Em 2 vezes\n");
            printf("N�o h� desconto ou acr�scimo.\n");
            break;
        case 4:
            precoFinal = precoNormal * 1.10; // 10% de juros
            printf("\nOp��o: Em 3 vezes\n");
            printf("Houve um acr�scimo de 10%%.\n");
            break;
        default:
            printf("\nC�digo de condi��o de pagamento inv�lido.\n");
            return 1; // Encerra o programa com erro
    }

    // Imprime o valor final a ser pago
    printf("O valor a ser pago �: R$ %.2f\n", precoFinal);

    return 0;
}
