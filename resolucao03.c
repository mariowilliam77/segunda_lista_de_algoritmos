#include <stdio.h>
#include <string.h>

// Fun��o recursiva para comparar a senha
int verificarSenhaRecursiva(const char* senhaUsuario, const char* senhaCorreta) {
    // 1. Caso base 1: Ambas as strings terminaram, significa que s�o iguais
    if (*senhaUsuario == '\0' && *senhaCorreta == '\0') {
        return 1; // Retorna 1 (verdadeiro) para acesso permitido
    }

    // 2. Caso base 2: As strings s�o de tamanhos diferentes, ou um caractere n�o bate
    if (*senhaUsuario != *senhaCorreta) {
        return 0; // Retorna 0 (falso) para acesso negado
    }

    // 3. Passo recursivo: Se os caracteres atuais s�o iguais, chame a fun��o para os pr�ximos
    return verificarSenhaRecursiva(senhaUsuario + 1, senhaCorreta + 1);
}

int main() {
    char senhaUsuario[100];
    const char* senhaCorreta = "ASDFG";

    printf("Digite a senha: ");
    scanf("%s", senhaUsuario);

    // Primeiro, verifique se o tamanho da senha do usu�rio � o mesmo que o da senha correta
    if (strlen(senhaUsuario) != strlen(senhaCorreta)) {
        printf("Acesso Negado: Senha incorreta.\n");
    } else {
        // Se os tamanhos forem iguais, inicie a verifica��o recursiva
        if (verificarSenhaRecursiva(senhaUsuario, senhaCorreta)) {
            printf("Acesso Permitido: Bem-vindo!\n");
        } else {
            printf("Acesso Negado: Senha incorreta.\n");
        }
    }

    return 0;
}
