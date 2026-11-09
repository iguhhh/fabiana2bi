#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

float diferenca = 0;

int main()
{
    Funcionario funcionario1;

    printf("Digite o nome do funcionario 1: ");
    scanf(" %49[^\n]", &funcionario1.nome);
    printf("Digite a idade do funcionario 1: ");
    scanf("%d", &funcionario1.idade);
    printf("Digite o salario do funcionario 1: ");
    scanf("%f", &funcionario1.salario);

    Funcionario funcionario2;

    printf("Digite o nome do funcionario 2: ");
    scanf(" %49[^\n]", &funcionario2.nome);
    printf("Digite a idade do funcionario 2: ");
    scanf("%d", &funcionario2.idade);
    printf("Digite o salario do funcionario 2: ");
    scanf("%f", &funcionario2.salario);

    printf("\n --Funcionario 1-- \n");
    printf("Nome: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: %.2f\n", funcionario1.salario);

    printf("\n --Funcionario 2-- \n");
    printf("Nome: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: %.2f\n", funcionario2.salario);

    printf("\n --Dados-- \n");
    diferenca = fabsf(funcionario1.salario - funcionario2.salario);
    if (funcionario1.salario == funcionario2.salario) {
        printf("O salario de ambos os funcionarios e igual.");
    } else if (funcionario1.salario > funcionario2.salario) {
        printf("O salario de %s e maior, a diferenca sendo %f", funcionario1.nome, diferenca);
    } else {
        printf("O salario de %s e maior, a diferenca sendo %f", funcionario2.nome, diferenca);
    }
    return 0;
}
