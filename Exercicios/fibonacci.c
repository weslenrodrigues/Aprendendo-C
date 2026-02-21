#include <stdio.h>

int main () {

    int quantidadeTermos = 0;
    int i = 0;
    
    printf ("Insira a quantidade de termos\n");
    scanf ("%d", &quantidadeTermos);
    
    int numerosTermos [quantidadeTermos];
    numerosTermos [0] = 0;
    numerosTermos [1] = 1;

    printf ("%d ", numerosTermos [0]);
    printf ("%d ", numerosTermos [1]);

    for (i = 2; i < quantidadeTermos; i++) {

        numerosTermos [i] = numerosTermos [i-1] + numerosTermos [i-2];
        printf ("%d ", numerosTermos [i]);
    }

    return 0;
}