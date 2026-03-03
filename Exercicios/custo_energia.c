#include <stdio.h>

float funcaoKwValor (float salarioMinimo) {

    float kwValor = salarioMinimo/1000;
    return kwValor;
}

float funcaopagarKw (float kwValor, float kwGastos) {

    float pagarKw = kwGastos * kwValor;
    return pagarKw;
}

int main (void) {

    float salarioMinimo, kwGastos, kwValor, pagarKw;

    printf ("Insira o salario minimo\n");
    scanf ("%f", &salarioMinimo);

    printf ("Insira a quantidade de KW gastos\n");
    scanf ("%f", &kwGastos);

    kwValor = funcaoKwValor (salarioMinimo);
    pagarKw = funcaopagarKw (kwValor, kwGastos);

    printf ("Valor de 1 KW: R$%.2f\n", kwValor);
    printf ("Valor a ser pago: R$%.2f\n", pagarKw);
    printf ("Valor a ser pago: R$%.2f\n", pagarKw - (pagarKw * (15.0/100.0)));
}