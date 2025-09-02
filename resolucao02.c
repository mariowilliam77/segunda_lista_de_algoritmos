#include <stdio.h>

int main() {
    // declaração de vaiaveis
    float salario, salario_reajustado = 0;

    // entrada de dados
    printf("Entre com o valor do salario: ");
    scanf("%f", &salario);
    // processamento/saída
    if (salario < 500){
        salario_reajustado = 1.3 * salario;
        printf("salario reajustado = %2f", salario_reajustado);
        } else
            printf("Funcionario nao tem o aumento");
            return 0;
}
