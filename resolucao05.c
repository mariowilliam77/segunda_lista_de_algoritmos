#include <stdio.h>

int main() {
    float salarioAtual, salarioReajustado;

    // Solicita o salário atual do funcionário
    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salarioAtual);

    // Usa a estrutura condicional para aplicar o reajuste
    if (salarioAtual <= 300) {
        // Se o salário for até R$ 300, aplica reajuste de 50%
        salarioReajustado = salarioAtual * 1.50; // ou salarioAtual + (salarioAtual * 0.50)
    } else {
        // Se o salário for maior que R$ 300, aplica reajuste de 30%
        salarioReajustado = salarioAtual * 1.30; // ou salarioAtual + (salarioAtual * 0.30)
    }

    // Imprime o salário reajustado
    printf("O novo salário reajustado é: R$ %.2f\n", salarioReajustado);

    return 0;
}
