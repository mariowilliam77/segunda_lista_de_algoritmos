#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Fun��o recursiva para contar palavras em uma string
int contarPalavras(const char *frase, int emPalavra) {
    // Caso base: se a string estiver vazia, retorna 0
    if (*frase == '\0') {
        return 0;
    }

    // Verifica se o caractere atual � um espa�o em branco
    int espaco = isspace(*frase);

    // Se o caractere atual n�o for um espa�o e o anterior era (ou � o in�cio da frase)
    // ent�o encontramos o come�o de uma nova palavra.
    if (!espaco && !emPalavra) {
        // Encontrou uma palavra, ent�o soma 1 e continua a contagem
        return 1 + contarPalavras(frase + 1, 1);
    } else {
        // Se for um espa�o, atualiza o estado para "n�o est� em palavra"
        // Se n�o for um espa�o, mant�m o estado
        return contarPalavras(frase + 1, !espaco);
    }
}

int main() {
    char frase[256];

    printf("Digite uma frase: ");
    // L� a linha inteira, incluindo espa�os
    fgets(frase, sizeof(frase), stdin);

    // Remove o caractere de nova linha que fgets() pode incluir
    frase[strcspn(frase, "\n")] = 0;

    // Chama a fun��o recursiva para obter o total de palavras
    int totalPalavras = contarPalavras(frase, 0);

    printf("A frase digitada tem %d palavras.\n", totalPalavras);

    return 0;
}
