#include <stdio.h>

int main () {

    int j, i;
    int tabuadaTotal = 1;
    int tabuadaMulti = 1;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {

            printf ("%d x %d = %d\n", tabuadaMulti + j, tabuadaTotal, tabuadaTotal * (tabuadaMulti + j));
            
        }
        tabuadaTotal++;
    }
}