#include <stdio.h>

int main () {

    int opcaoMenu;
    float n1, n2;
    
    printf ("Digite 1 para somar\n");
    printf ("Digite 2 para subtrair\n");
    printf ("Digite 3 para multiplicar\n");
    printf ("Digite 4 para dividir\n");
    scanf ("%d", &opcaoMenu);

    if (opcaoMenu < 1 || opcaoMenu > 4) {

        printf ("Erro: Opcao invalida, escolha as opcoes de 1 a 4.");
        return 0;
    }

    printf ("\nInsire o primero numero:\n");
    scanf ("%f", &n1);

    printf ("Insire o segundo numero:\n");
    scanf ("%f", &n2);

    switch (opcaoMenu) {

        case 1: 
            printf ("O resultado foi:\n%.2f", n1 + n2);
            break;

        case 2: 
            printf ("O resultado foi:\n%.2f", n1 - n2);
            break;

        case 3: 
            printf ("O resultado foi:\n%.2f", n1 * n2);
            break;

        case 4: 
            if (n2 != 0) {

                printf ("O resultado foi:\n%.2f", n1 / n2);
            } else {

                printf ("Erro: Divisao por zero");
            }
            break;

        default:
            printf ("Erro: Opcao invalida");
            break;
            
    }

    return 0;
}