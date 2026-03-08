#include <stdio.h>

int main (void) {

    int x;
    printf ("Insira a quantidade de numeros primos\n");
    scanf ("%d", &x);

    int numero[x];
    int contador = 0;
    int numeroteste = 2;

    while (contador < x) {

        int primo = 1;

        for (int i = 2; i < numeroteste; i++) {

            if (numeroteste % i == 0) {

                primo = 0;
                break;
            }
        }
        
        if (primo == 1) {

            numero[contador] = numeroteste;
            contador++;
        }

        numeroteste++;
    }

    for (int i = 0; i < x; i++) {

        printf ("\n%d\n", numero[i]);
    }

    return 0;
 }