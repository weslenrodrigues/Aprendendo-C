#include <stdio.h>
#include <string.h>

int main () {

    char nomeUsuario [50];
    char sobrenomeUsuario [50];

    printf("Digite seu nome:\n");
    fgets(nomeUsuario, 50, stdin);
    fflush(stdin);
    nomeUsuario[strcspn(nomeUsuario,"\n")] = '\0';
    strcat(nomeUsuario, " ");

    printf("Digite seu Sobrenome:\n");
    fgets(sobrenomeUsuario, 50, stdin);
    fflush(stdin);
    sobrenomeUsuario[strcspn(sobrenomeUsuario,"\n")] = '\0';

    strcat(nomeUsuario, sobrenomeUsuario);
    printf("%s", nomeUsuario);
    return 0;
}