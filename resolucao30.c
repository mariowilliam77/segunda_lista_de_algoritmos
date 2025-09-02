#include <stdio.h>
#include <ctype.h>

void main() {
    char resposta;

    printf("Pense em um animal... Eu vou tentar adivinhar!\n");

    printf("O animal que você pensou é mamífero? (S/N) ");
    scanf(" %c", &resposta);

    if (toupper(resposta) == 'S') {
        printf("O animal é quadrúpede? (S/N) ");
        scanf(" %c", &resposta);
        if (toupper(resposta) == 'S') {
            printf("É carnívoro? (S/N) ");
            scanf(" %c", &resposta);
            if (toupper(resposta) == 'S') {
                printf("O animal é o Leão.\n");
            } else {
                printf("O animal é o Cavalo.\n");
            }
        } else { // Não é quadrúpede
            printf("É bípede? (S/N) ");
            scanf(" %c", &resposta);
            if (toupper(resposta) == 'S') {
                printf("É onívoro? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal é o Homem.\n");
                } else {
                    printf("O animal é o Macaco.\n");
                }
            } else { // Não é bípede
                printf("O animal é voador? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal é o Morcego.\n");
                } else {
                    printf("O animal é a Baleia.\n");
                }
            }
        }
    } else { // Não é mamífero
        printf("O animal é uma ave? (S/N) ");
        scanf(" %c", &resposta);
        if (toupper(resposta) == 'S') {
            printf("O animal é voador? (S/N) ");
            scanf(" %c", &resposta);
            if (toupper(resposta) == 'S') {
                printf("O animal é de clima tropical? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal é o Avestruz.\n");
                } else {
                    printf("O animal é o Pinguim.\n");
                }
            } else { // Não é voador
                printf("O animal é de rapina? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal é a Águia.\n");
                } else {
                    printf("O animal é o Pato.\n");
                }
            }
        } else { // Não é ave
            printf("O animal é um réptil? (S/N) ");
            scanf(" %c", &resposta);
            if (toupper(resposta) == 'S') {
                printf("Tem casco? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal é a Tartaruga.\n");
                } else {
                    printf("O animal é carnívoro? (S/N) ");
                    scanf(" %c", &resposta);
                    if (toupper(resposta) == 'S') {
                        printf("O animal é o Crocodilo.\n");
                    } else {
                        printf("O animal é a Cobra.\n");
                    }
                }
            } else { // Se não é mamífero, nem ave, nem réptil, é o último caso.
                printf("Não consigo adivinhar o animal.\n");
            }
        }
    }

    return 0;
}
