#include <stdio.h>

int main() {
    float salarioMinimo, horasTrabalhadas, salarioBruto, salarioLiquido, valorDependentes, valorHorasExtras, irrf, gratificacao, salarioReceber;
    int numDependentes, numHorasExtras;
    float valorHoraTrabalhada;

    // 1. Entrada de Dados
    printf("Digite o valor do sal�rio m�nimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o n�mero de horas trabalhadas no m�s: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o n�mero de dependentes: ");
    scanf("%d", &numDependentes);

    printf("Digite o n�mero de horas extras trabalhadas: ");
    scanf("%d", &numHorasExtras);

    // 2. C�lculo dos Componentes do Sal�rio

    // a) Valor da hora trabalhada
    valorHoraTrabalhada = salarioMinimo / 5.0;

    // b) Sal�rio do m�s (base)
    salarioBruto = horasTrabalhadas * valorHoraTrabalhada;

    // c) Valor dos dependentes
    valorDependentes = numDependentes * 32.0;
    salarioBruto += valorDependentes;

    // d) Valor das horas extras
    valorHorasExtras = numHorasExtras * (valorHoraTrabalhada * 1.50);
    salarioBruto += valorHorasExtras;

    // 3. O sal�rio bruto j� foi calculado, vamos imprimi-lo
    printf("\nSal�rio Bruto: R$ %.2f\n", salarioBruto);

    // 4. C�lculo do IRRF
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

    // 5. C�lculo do Sal�rio L�quido
    salarioLiquido = salarioBruto - irrf;
    printf("Sal�rio L�quido: R$ %.2f\n", salarioLiquido);

    // 6. C�lculo da Gratifica��o
    if (salarioLiquido <= 350.0) {
        gratificacao = 100.0;
    } else { // salarioLiquido > 350
        gratificacao = 50.0;
    }
    printf("Gratifica��o: R$ %.2f\n", gratificacao);

    // 7. C�lculo do Sal�rio a Receber
    salarioReceber = salarioLiquido + gratificacao;
    printf("-----------------------------------\n");
    printf("SAL�RIO A RECEBER: R$ %.2f\n", salarioReceber);

    return 0;
}
