#include <stdio.h>

int main () {

    int idades[4];
    int i;
    int media;

    for (i=0; i<4; i++) {

        printf ("Qual a idade deste familiar?\n");
        scanf ("%d", &idades[i]);
    }

    for (i=0; i<4; i++) {

        printf ("A idade do familiar %d foi: %d\n", i, idades[i]);
    }
    
    for (i=0; i<4; i++) {

        media += idades [i];
    }
    printf ("A media entre os familiares foi: %d", media/4);
}