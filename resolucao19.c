#include <stdio.h>

int main() {
    float salarioMinimo, horasTrabalhadas, salarioBruto, salarioLiquido, valorDependentes, valorHorasExtras, irrf, gratificacao, salarioReceber;
    int numDependentes, numHorasExtras;
    float valorHoraTrabalhada;

    // 1. Entrada de Dados
    printf("Digite o valor do salário mínimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o número de dependentes: ");
    scanf("%d", &numDependentes);

    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%d", &numHorasExtras);

    // 2. Cálculo dos Componentes do Salário

    // a) Valor da hora trabalhada
    valorHoraTrabalhada = salarioMinimo / 5.0;

    // b) Salário do mês (base)
    salarioBruto = horasTrabalhadas * valorHoraTrabalhada;

    // c) Valor dos dependentes
    valorDependentes = numDependentes * 32.0;
    salarioBruto += valorDependentes;

    // d) Valor das horas extras
    valorHorasExtras = numHorasExtras * (valorHoraTrabalhada * 1.50);
    salarioBruto += valorHorasExtras;

    // 3. O salário bruto já foi calculado, vamos imprimi-lo
    printf("\nSalário Bruto: R$ %.2f\n", salarioBruto);

    // 4. Cálculo do IRRF
    if (salarioBruto < 200.0) {
        irrf = 0.0;
        printf("IRRF: Isento\n");
    } else if (salarioBruto >= 200.0 && salarioBruto <= 500.0) {
        irrf = salarioBruto * 0.10;
        printf("IRRF (10%%): R$ %.2f\n", irrf);
    } else { // salarioBruto > 500
        irrf = salarioBruto * 0.20;
        printf("IRRF (20%%): R$ %.2f\n", irrf);
    }

    // 5. Cálculo do Salário Líquido
    salarioLiquido = salarioBruto - irrf;
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);

    // 6. Cálculo da Gratificação
    if (salarioLiquido <= 350.0) {
        gratificacao = 100.0;
    } else { // salarioLiquido > 350
        gratificacao = 50.0;
    }
    printf("Gratificação: R$ %.2f\n", gratificacao);

    // 7. Cálculo do Salário a Receber
    salarioReceber = salarioLiquido + gratificacao;
    printf("-----------------------------------\n");
    printf("SALÁRIO A RECEBER: R$ %.2f\n", salarioReceber);

    return 0;
}
