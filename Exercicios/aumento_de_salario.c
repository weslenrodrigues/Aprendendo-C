#include <stdio.h>

int main () {

    float salarioFuncionario, percentualSalario;

    printf ("Qual e o salario do funcionario atualmente?\n");
    scanf ("%f", &salarioFuncionario);

    printf ("Qual o percentual de aumento?\n");
    scanf ("%f", &percentualSalario);

    float aumentoSalario = salarioFuncionario * percentualSalario/100;
    float totalSalario = salarioFuncionario + aumentoSalario;

    printf ("O aumento foi de: R$%.2f\n", aumentoSalario);
    printf ("Novo salario do funcionario: R$%.2f", totalSalario);

    return 0;
}