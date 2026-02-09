#include <stdio.h>
#include <string.h>

int main () {

    char nomeUsuario [50];
    char sobrenomeUsuario [50];

    puts("Digite seu nome:");
    fgets(nomeUsuario, 50, stdin);
    fflush(stdin);

    puts("Digite seu Sobrenome");
    fgets(sobrenomeUsuario, 50, stdin);
    fflush(stdin);

}