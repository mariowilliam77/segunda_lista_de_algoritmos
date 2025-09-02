#include <stdio.h>

int main() {
    int angulo;

    // Solicita o ângulo ao usuário
    printf("Digite a medida do ângulo em graus (número inteiro): ");
    scanf("%d", &angulo);

    // Normaliza o ângulo para o intervalo de 0 a 360 graus
    // Isso lida com ângulos positivos e negativos fora da faixa
    int anguloNormalizado = angulo % 360;

    // Garante que o resultado seja positivo, se o ângulo original for negativo
    if (anguloNormalizado < 0) {
        anguloNormalizado += 360;
    }

    // Usa a estrutura condicional para determinar o quadrante
    if (anguloNormalizado >= 0 && anguloNormalizado < 90) {
        printf("O ângulo de %d graus está no 1º quadrante.\n", angulo);
    } else if (anguloNormalizado >= 90 && anguloNormalizado < 180) {
        printf("O ângulo de %d graus está no 2º quadrante.\n", angulo);
    } else if (anguloNormalizado >= 180 && anguloNormalizado < 270) {
        printf("O ângulo de %d graus está no 3º quadrante.\n", angulo);
    } else if (anguloNormalizado >= 270 && anguloNormalizado < 360) {
        printf("O ângulo de %d graus está no 4º quadrante.\n", angulo);
    } else if (anguloNormalizado == 0 || anguloNormalizado == 90 || anguloNormalizado == 180 || anguloNormalizado == 270) {
        printf("O ângulo de %d graus está em um eixo entre quadrantes.\n", angulo);
    }

    return 0;
}
