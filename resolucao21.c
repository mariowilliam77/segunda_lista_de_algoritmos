#include <stdio.h>
#include <ctype.h> // Para a fun��o tolower()
#include <string.h> // Para a fun��o strlen()

// Fun��o recursiva para contar vogais em uma string
int contarVogais(const char *frase) {
    // Caso base: Se a string estiver vazia, retorna 0
    if (*frase == '\0') {
        return 0;
    }

    // Converte o caractere atual para min�sculo para facilitar a compara��o
    char caractere = tolower(*frase);

    // Vari�vel para armazenar a contagem
    int contador = 0;

    // Verifica se o caractere atual � uma vogal
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
        contador = 1;
    }

    // Passo recursivo: soma a contagem do caractere atual com a contagem do restante da string
    return contador + contarVogais(frase + 1);
}

int main() {
    char frase[256]; // Define um array para a frase

    printf("Digite uma frase: ");
    // L� a linha inteira, incluindo espa�os
    fgets(frase, sizeof(frase), stdin);

    // Remove o caractere de nova linha que fgets() pode incluir
    frase[strcspn(frase, "\n")] = 0;

    // Chama a fun��o recursiva para obter o total de vogais
    int totalVogais = contarVogais(frase);

    printf("A frase digitada tem %d vogais.\n", totalVogais);

    return 0;
}
