#include <stdio.h>
#include <ctype.h>

void main() {
    char resposta;

    printf("Pense em um animal... Eu vou tentar adivinhar!\n");

    printf("O animal que voc� pensou � mam�fero? (S/N) ");
    scanf(" %c", &resposta);

    if (toupper(resposta) == 'S') {
        printf("O animal � quadr�pede? (S/N) ");
        scanf(" %c", &resposta);
        if (toupper(resposta) == 'S') {
            printf("� carn�voro? (S/N) ");
            scanf(" %c", &resposta);
            if (toupper(resposta) == 'S') {
                printf("O animal � o Le�o.\n");
            } else {
                printf("O animal � o Cavalo.\n");
            }
        } else { // N�o � quadr�pede
            printf("� b�pede? (S/N) ");
            scanf(" %c", &resposta);
            if (toupper(resposta) == 'S') {
                printf("� on�voro? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal � o Homem.\n");
                } else {
                    printf("O animal � o Macaco.\n");
                }
            } else { // N�o � b�pede
                printf("O animal � voador? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal � o Morcego.\n");
                } else {
                    printf("O animal � a Baleia.\n");
                }
            }
        }
    } else { // N�o � mam�fero
        printf("O animal � uma ave? (S/N) ");
        scanf(" %c", &resposta);
        if (toupper(resposta) == 'S') {
            printf("O animal � voador? (S/N) ");
            scanf(" %c", &resposta);
            if (toupper(resposta) == 'S') {
                printf("O animal � de clima tropical? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal � o Avestruz.\n");
                } else {
                    printf("O animal � o Pinguim.\n");
                }
            } else { // N�o � voador
                printf("O animal � de rapina? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal � a �guia.\n");
                } else {
                    printf("O animal � o Pato.\n");
                }
            }
        } else { // N�o � ave
            printf("O animal � um r�ptil? (S/N) ");
            scanf(" %c", &resposta);
            if (toupper(resposta) == 'S') {
                printf("Tem casco? (S/N) ");
                scanf(" %c", &resposta);
                if (toupper(resposta) == 'S') {
                    printf("O animal � a Tartaruga.\n");
                } else {
                    printf("O animal � carn�voro? (S/N) ");
                    scanf(" %c", &resposta);
                    if (toupper(resposta) == 'S') {
                        printf("O animal � o Crocodilo.\n");
                    } else {
                        printf("O animal � a Cobra.\n");
                    }
                }
            } else { // Se n�o � mam�fero, nem ave, nem r�ptil, � o �ltimo caso.
                printf("N�o consigo adivinhar o animal.\n");
            }
        }
    }

    return 0;
}
