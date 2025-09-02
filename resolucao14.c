#include <stdio.h>

int main() {
    int codigo;

    // Solicita o c�digo do cargo
    printf("Digite o c�digo do cargo do funcion�rio (1 a 5): ");
    scanf("%d", &codigo);

    // Usa a estrutura switch-case para verificar o c�digo
    switch (codigo) {
        case 1:
            printf("Cargo: Escritur�rio\n");
            printf("Aumento: 50%%\n");
            break;
        case 2:
            printf("Cargo: Secret�rio\n");
            printf("Aumento: 35%%\n");
            break;
        case 3:
            printf("Cargo: Caixa\n");
            printf("Aumento: 20%%\n");
            break;
        case 4:
            printf("Cargo: Gerente\n");
            printf("Aumento: 10%%\n");
            break;
        case 5:
            printf("Cargo: Diretor\n");
            printf("Aumento: N�o tem aumento\n");
            break;
        default:
            printf("C�digo de cargo inv�lido!\n");
            break;
    }

    return 0;
}
