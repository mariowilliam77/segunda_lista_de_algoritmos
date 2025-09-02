#include <stdio.h>

int main() {
    int codigo;

    // Solicita o código do cargo
    printf("Digite o código do cargo do funcionário (1 a 5): ");
    scanf("%d", &codigo);

    // Usa a estrutura switch-case para verificar o código
    switch (codigo) {
        case 1:
            printf("Cargo: Escriturário\n");
            printf("Aumento: 50%%\n");
            break;
        case 2:
            printf("Cargo: Secretário\n");
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
            printf("Aumento: Não tem aumento\n");
            break;
        default:
            printf("Código de cargo inválido!\n");
            break;
    }

    return 0;
}
