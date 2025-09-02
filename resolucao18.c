#include <stdio.h>

int main() {
    float horasExtras, horasFalta;
    float hValor;
    int hMinutos;
    int premio;

    // 1. Recebe as horas extras e as horas de falta
    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    printf("Digite o número de horas de falta ao trabalho: ");
    scanf("%f", &horasFalta);

    // 2. Calcula o valor de H (em horas)
    hValor = horasExtras - (2.0 / 3.0) * horasFalta;

    // 3. Converte o valor de H para minutos
    hMinutos = (int)(hValor * 60);

    // 4. Usa a estrutura condicional para determinar o prêmio
    if (hMinutos > 2400) {
        premio = 500;
    } else if (hMinutos >= 1800 && hMinutos <= 2400) {
        premio = 400;
    } else if (hMinutos >= 1200 && hMinutos < 1800) {
        premio = 300;
    } else if (hMinutos >= 600 && hMinutos < 1200) {
        premio = 200;
    } else { // Menor ou igual a 600 minutos
        premio = 100;
    }

    // 5. Imprime todas as informações solicitadas
    printf("\n--- Resumo do Funcionário ---\n");
    printf("Horas extras: %.2f horas\n", horasExtras);
    printf("Horas de falta: %.2f horas\n", horasFalta);
    printf("Valor de H (em horas): %.2f\n", hValor);
    printf("Valor de H (em minutos): %d\n", hMinutos);
    printf("Valor do prêmio: R$ %d,00\n", premio);
    printf("------------------------------\n");

    return 0;
}
