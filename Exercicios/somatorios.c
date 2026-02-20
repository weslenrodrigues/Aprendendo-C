#include <stdio.h>

int main () {

    int inicioNumeros, finalNumeros;
    int i = 0;
    int soma = 0;

    printf ("Insira o numero que comecara no somatorio");
    scanf ("%d", &inicioNumeros);

    printf ("Insira o numero que terminara no somatorio");
    scanf ("%d", &finalNumeros);

    if (inicioNumeros > finalNumeros) {

        printf ("Erro: Primeiro numero e maior");
        return 0;
    }

        if (inicioNumeros == finalNumeros) {

        printf ("O somatorio total foi: %d", inicioNumeros);
        return 0;
    }

    for (i = inicioNumeros; i <= finalNumeros; i++) {

        soma += i;
    }

    printf ("O somatorio total foi: %d", soma);
    return 0;
}