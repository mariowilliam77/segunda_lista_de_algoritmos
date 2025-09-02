#include <stdio.h>

int main() {
    int angulo;

    // Solicita o �ngulo ao usu�rio
    printf("Digite a medida do �ngulo em graus (n�mero inteiro): ");
    scanf("%d", &angulo);

    // Normaliza o �ngulo para o intervalo de 0 a 360 graus
    // Isso lida com �ngulos positivos e negativos fora da faixa
    int anguloNormalizado = angulo % 360;

    // Garante que o resultado seja positivo, se o �ngulo original for negativo
    if (anguloNormalizado < 0) {
        anguloNormalizado += 360;
    }

    // Usa a estrutura condicional para determinar o quadrante
    if (anguloNormalizado >= 0 && anguloNormalizado < 90) {
        printf("O �ngulo de %d graus est� no 1� quadrante.\n", angulo);
    } else if (anguloNormalizado >= 90 && anguloNormalizado < 180) {
        printf("O �ngulo de %d graus est� no 2� quadrante.\n", angulo);
    } else if (anguloNormalizado >= 180 && anguloNormalizado < 270) {
        printf("O �ngulo de %d graus est� no 3� quadrante.\n", angulo);
    } else if (anguloNormalizado >= 270 && anguloNormalizado < 360) {
        printf("O �ngulo de %d graus est� no 4� quadrante.\n", angulo);
    } else if (anguloNormalizado == 0 || anguloNormalizado == 90 || anguloNormalizado == 180 || anguloNormalizado == 270) {
        printf("O �ngulo de %d graus est� em um eixo entre quadrantes.\n", angulo);
    }

    return 0;
}
