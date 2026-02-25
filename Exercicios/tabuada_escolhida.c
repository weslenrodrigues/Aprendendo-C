#include <stdio.h>

int main () {

    int tabuadaEscolhida, j, i;
    int tabuadaMulti = 1;

    printf ("Escolha a tabuada de 1-10\n");
    scanf ("%d", &tabuadaEscolhida);
    fflush (stdin);

    for (j = 0; j < 10; j++) {

            printf ("%d x %d = %d\n", tabuadaMulti + j, tabuadaEscolhida, tabuadaEscolhida * (tabuadaMulti + j));
        }
}