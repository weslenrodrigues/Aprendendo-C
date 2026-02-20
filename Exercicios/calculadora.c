#include  <stdio.h>

int main () {

    int opcaoMenu;
    float n1, n2;
    
    printf ("Digite 1 para somar\n");
    printf ("Digite 2 para subtrair\n");
    printf ("Digite 3 para multiplicar\n");
    printf ("Digite 4 para dividir\n");

    scanf ("%d", &opcaoMenu);
    if (opcaoMenu == 1) {

        printf ("\nInsire o primero numero:\n");
        scanf ("%f", &n1);

        printf ("Insire o segundo numero:\n");
        scanf ("%f", &n2);

        float soma = n1 + n2;

        printf ("O resultado foi:\n%.2f", soma);
    }

    if (opcaoMenu == 2) {

        printf ("\nInsire o primero numero:\n");
        scanf ("%f", &n1);

        printf ("Insire o segundo numero:\n");
        scanf ("%f", &n2);

        float subtracao = n1 - n2;

        printf ("O resultado foi:\n%.2f", subtracao);
    }

    if (opcaoMenu == 3) {

        printf ("\nInsire o primero numero:\n");
        scanf ("%f", &n1);

        printf ("Insire o segundo numero:\n");
        scanf ("%f", &n2);

        float multiplicacao = n1 * n2;

        printf ("O resultado foi:\n%.2f", multiplicacao);
    }

    if (opcaoMenu == 4) {

        printf ("\nInsire o primero numero:\n");
        scanf ("%f", &n1);

        printf ("Insire o segundo numero:\n");
        scanf ("%f", &n2);

        float divisao = n1 / n2;

        if (n2 != 0) {

        printf ("O resultado foi:\n%.2f", divisao);
        } else {

            printf ("Erro: Divisao por zero");
        }
    }

    if (opcaoMenu < 1 && opcaoMenu > 4) {

        printf ("Opcao invalida, escolha as opcoes de 1 a 4.");
    } 

    return 0;
}