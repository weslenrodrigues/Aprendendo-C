#include <stdio.h>
#include <string.h>

int main () {

    char nome1[20];
    char nome2[20] = "Arya Stark";

    puts ("Mostrando apenas a origem:");
    puts (nome2);

    strcpy (nome1, nome2);

    puts ("Mostrando o destino:");
    puts (nome1);

    strcpy (nome1, "Jon Snow");
    
    puts ("Mudando a origem por outra palavra:");
    puts (nome1);
    puts (nome2);
}