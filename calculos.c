#include <stdio.h>

int main (){

    int A, B, soma, sub, mult, divi;

    printf("Digite o valor de A:\n");
    scanf("%d", &A);

    printf("Digite o valor de B:\n");
    scanf("%d", &B);

    soma = A + B;
    sub = A - B;
    mult = A * B;
    divi = A / B;

    printf("A soma de %d e %d foi: %d\n", A, B, soma);
    printf("A subtracao de %d e %d foi: %d\n", A, B, sub);
    printf("A multiplicacao de %d e %d foi: %d\n", A, B, mult);
    printf("A divisao de %d e %d foi: %d\n", A, B, divi);

    return 0;
}