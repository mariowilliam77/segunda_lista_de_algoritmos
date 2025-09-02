#include <stdio.h>

int main() {
    float salarioAtual, salarioReajustado;

    // Solicita o sal�rio atual do funcion�rio
    printf("Digite o sal�rio atual do funcion�rio: R$ ");
    scanf("%f", &salarioAtual);

    // Usa a estrutura condicional para aplicar o reajuste
    if (salarioAtual <= 300) {
        // Se o sal�rio for at� R$ 300, aplica reajuste de 50%
        salarioReajustado = salarioAtual * 1.50; // ou salarioAtual + (salarioAtual * 0.50)
    } else {
        // Se o sal�rio for maior que R$ 300, aplica reajuste de 30%
        salarioReajustado = salarioAtual * 1.30; // ou salarioAtual + (salarioAtual * 0.30)
    }

    // Imprime o sal�rio reajustado
    printf("O novo sal�rio reajustado �: R$ %.2f\n", salarioReajustado);

    return 0;
}
