#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função recursiva para verificar se uma substring corresponde a "aula"
// Retorna 1 se for "aula", 0 caso contrário
int verificarAula(const char* frase) {
    // Caso base: se a string for muito curta para conter "aula"
    if (strlen(frase) < 4) {
        return 0;
    }

    // Verifica se os primeiros 4 caracteres são 'a', 'u', 'l', 'a'
    // Converte para minúsculo para a verificação
    if (tolower(frase[0]) == 'a' &&
        tolower(frase[1]) == 'u' &&
        tolower(frase[2]) == 'l' &&
        tolower(frase[3]) == 'a') {
        return 1;
    } else {
        return 0;
    }
}

// Função recursiva principal para contar as ocorrências de "aula"
int contarAulas(const char* frase) {
    // Caso base: se a string estiver vazia, retorna 0
    if (*frase == '\0') {
        return 0;
    }

    // Contagem da ocorrência na posição atual
    int ocorrencia = 0;
    if (verificarAula(frase)) {
        ocorrencia = 1;
    }

    // Passo recursivo: soma a ocorrência atual com a contagem do restante da string
    return ocorrencia + contarAulas(frase + 1);
}

int main() {
    char frase[256];

    printf("Digite uma frase: ");
    // Lê a linha inteira, incluindo espaços
    fgets(frase, sizeof(frase), stdin);

    // Remove o caractere de nova linha que fgets() pode incluir
    frase[strcspn(frase, "\n")] = 0;

    // Chama a função recursiva para obter o total de vezes que "aula" aparece
    int totalAulas = contarAulas(frase);

    printf("A palavra \"aula\" apareceu %d vezes na frase.\n", totalAulas);

    return 0;
}
