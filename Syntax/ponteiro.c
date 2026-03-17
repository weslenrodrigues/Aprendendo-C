#include <stdio.h>

void mostra (int* x) { //transformo o endereço da variavel e uso aqui dentro da função, quando ele sai da função
    //ele guarda fora da função também
    
    printf ("%d\n", (*x));
    (*x)++; 
    printf ("%d\n", (*x));
    (*x)++;
}

int main (void){

    int a = 3;

    printf ("%d\n", a);
    mostra (&a); //peço pro programa usar o endereço da variavel (é diferente de pegar a variavel)
    printf ("%d\n", a);
}