#include <stdio.h>

float funcaoLucroDistribuidor (float porcento,float valor) {

    float lucroDistribuidor;

    lucroDistribuidor = valor * (porcento/100);
    return lucroDistribuidor;
}

float funcaoImposto (float porcento,float valor) {

    float valorImposto;

    valorImposto = valor * (porcento/100);
    return valorImposto;
}

float funcaovalorFinal (float valorInicial,float lucroDistribuidor, float valorImposto) {

    float valorFinal;

    valorFinal = valorInicial + lucroDistribuidor + valorImposto;
    return valorFinal;
}


int main (void) {

    float valorInicial, porcentoDistribuidor, porcentoImposto, lucroDistribuidor, valorImposto, valorFinal;

    printf ("Insira o preco de fabrica:\nR$");
    scanf ("%f", &valorInicial);

    printf ("Insira a porcentagem de lucro do distribuidor:\n");
    scanf ("%f", &porcentoDistribuidor);

    printf ("Insira a porcentagem de impostos:\n");
    scanf ("%f", &porcentoImposto);

    lucroDistribuidor = funcaoLucroDistribuidor (porcentoDistribuidor, valorInicial);
    valorImposto = funcaoImposto (porcentoImposto, valorInicial);
    valorFinal = funcaovalorFinal (valorInicial, lucroDistribuidor, valorImposto);

    printf ("Lucro do distribuidor: R$ %.2f\n", lucroDistribuidor);
    printf ("Impostos: R$ %.2f\n", valorImposto);
    printf ("Valor Final: R$ %.2f\n", valorFinal);
}