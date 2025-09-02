#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função recursiva para contar palavras em uma string
int contarPalavras(const char *frase, int emPalavra) {
    // Caso base: se a string estiver vazia, retorna 0
    if (*frase == '\0') {
        return 0;
    }

    // Verifica se o caractere atual é um espaço em branco
    int espaco = isspace(*frase);

    // Se o caractere atual não for um espaço e o anterior era (ou é o início da frase)
    // então encontramos o começo de uma nova palavra.
    if (!espaco && !emPalavra) {
        // Encontrou uma palavra, então soma 1 e continua a contagem
        return 1 + contarPalavras(frase + 1, 1);
    } else {
        // Se for um espaço, atualiza o estado para "não está em palavra"
        // Se não for um espaço, mantém o estado
        return contarPalavras(frase + 1, !espaco);
    }
}

int main() {
    char frase[256];

    printf("Digite uma frase: ");
    // Lê a linha inteira, incluindo espaços
    fgets(frase, sizeof(frase), stdin);

    // Remove o caractere de nova linha que fgets() pode incluir
    frase[strcspn(frase, "\n")] = 0;

    // Chama a função recursiva para obter o total de palavras
    int totalPalavras = contarPalavras(frase, 0);

    printf("A frase digitada tem %d palavras.\n", totalPalavras);

    return 0;
}
