#include <stdio.h>

int main() {
    char sexo;
    float altura, pesoIdeal;

    // Solicita o sexo da pessoa
    printf("Digite o seu sexo (m para masculino, f para feminino): ");
    scanf(" %c", &sexo); // O espa�o antes de %c � para consumir qualquer caractere de espa�o em branco

    // Solicita a altura da pessoa
    printf("Digite a sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    // Usa a estrutura condicional para aplicar a f�rmula correta
    if (sexo == 'm' || sexo == 'M') {
        // F�rmula para homens
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal �: %.2f kg\n", pesoIdeal);
    } else if (sexo == 'f' || sexo == 'F') {
        // F�rmula para mulheres
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal �: %.2f kg\n", pesoIdeal);
    } else {
        // Mensagem de erro para sexo inv�lido
        printf("Sexo inv�lido! Por favor, use 'm' ou 'f'.\n");
    }

    return 0;
}
