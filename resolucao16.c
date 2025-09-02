#include <stdio.h>

int main() {
    int idade;
    char grupoRisco;

    // Solicita a idade do segurado
    printf("Digite a idade do segurado: ");
    scanf("%d", &idade);

    // Verifica se a idade est� dentro da faixa permitida (18 a 70)
    if (idade < 18 || idade > 70) {
        printf("Idade inv�lida. Apenas pessoas entre 18 e 70 anos podem adquirir ap�lices de seguro.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Solicita o grupo de risco
    printf("Digite o grupo de risco (b para Baixo, m para M�dio, a para Alto): ");
    scanf(" %c", &grupoRisco); // O espa�o antes de %c consome qualquer caractere de espa�o em branco

    // Usa a estrutura if-else if para as faixas de idade
    if (idade >= 18 && idade <= 24) {
        // Idade entre 18 e 24
        switch (grupoRisco) {
            case 'b':
            case 'B':
                printf("O c�digo do seguro �: 7\n");
                break;
            case 'm':
            case 'M':
                printf("O c�digo do seguro �: 8\n");
                break;
            case 'a':
            case 'A':
                printf("O c�digo do seguro �: 9\n");
                break;
            default:
                printf("Grupo de risco inv�lido.\n");
                break;
        }
    } else if (idade >= 25 && idade <= 40) {
        // Idade entre 25 e 40
        switch (grupoRisco) {
            case 'b':
            case 'B':
                printf("O c�digo do seguro �: 4\n");
                break;
            case 'm':
            case 'M':
                printf("O c�digo do seguro �: 5\n");
                break;
            case 'a':
            case 'A':
                printf("O c�digo do seguro �: 6\n");
                break;
            default:
                printf("Grupo de risco inv�lido.\n");
                break;
        }
    } else if (idade >= 41 && idade <= 70) {
        // Idade entre 41 e 70
        switch (grupoRisco) {
            case 'b':
            case 'B':
                printf("O c�digo do seguro �: 1\n");
                break;
            case 'm':
            case 'M':
                printf("O c�digo do seguro �: 2\n");
                break;
            case 'a':
            case 'A':
                printf("O c�digo do seguro �: 3\n");
                break;
            default:
                printf("Grupo de risco inv�lido.\n");
                break;
        }
    }

    return 0;
}
