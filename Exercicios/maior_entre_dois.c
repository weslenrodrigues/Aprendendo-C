#include <stdio.h>

int main () {

    float n1, n2;

    printf ("Insira o primeiro numero:\n");
    scanf ("%f", &n1);

    printf ("Insira o segundo numero:\n");
    scanf ("%f", &n2);

    if (n1 > n2) {

        printf ("O maior numero foi: %.2f", n1);
    } else if (n1 == n2) {

        printf ("Os dois numeros sao iguais.");
    } else {

        printf ("O maior numero foi: %.2f", n2);
    }

}