#include <stdio.h>
#include <string.h>
#include <locale.h>

// Contando espaços e letras com strlen
int main () {
    setlocale(LC_ALL, "Portuguese");

    char nome[41];
    int tamanho;

    printf ("Digite uma frase:\n");
    fgets (nome, 41, stdin);
    tamanho = strlen(nome);

    if (tamanho >= 30) {

        puts ("Esta e uma frase longa");
    } else if (tamanho >= 15) {

        puts ("Esta e uma frase media");
    } else {

        puts ("Esta e uma frase pequena");
    }
   printf ("O tamanho da frase foi de %d caracteres (contando os espacos)", tamanho);

}