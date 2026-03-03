#include <stdio.h>

float funcaoSalarioReceber (float horasTotal,float salarioMinimo) {

    float salarioBruto = horasTotal * (salarioMinimo/2);
    float imposto = (3.0/100.0) * salarioBruto;

    float salarioLiquido = salarioBruto - imposto;
    return salarioLiquido;
}

int main (void) {

    float horasTotal, salarioMinimo, salarioReceber;

    printf ("Insira o numero de horas trabalhadas:\n");
    scanf ("%f", &horasTotal);

    printf ("Insira o valor do salario minimo:\n");
    scanf ("%f", &salarioMinimo);

    salarioReceber = funcaoSalarioReceber (horasTotal, salarioMinimo);

    printf ("Valor a receber:\n%2.f", salarioReceber);
    return 0;
}