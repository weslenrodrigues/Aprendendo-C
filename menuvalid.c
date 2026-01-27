    #include <stdio.h>
    int main () {
        int opcao = 0;

        do {

            printf ("Menu\n");
            printf ("Escolha uma dessas opcoes\n");
            printf ("1 - Somar dois numeros\n");
            printf ("2 - Subtrair dois numeros\n");
            printf ("3 - Sair\n");
            scanf ("%d", &opcao);

            if (opcao == 1) {

                int A;
                int B;
                printf ("Quanto vale A?\n");
                scanf ("%d", &A);
                printf ("Quanto vale B?\n");
                scanf ("%d", &B);

                int soma = A + B;
                printf ("A soma de %d e %d foi: %d \n", A, B, soma);
            }

            if (opcao == 2) {

                int A;
                int B;
                printf ("Quanto vale A?\n");
                scanf ("%d", &A);
                printf ("Quanto vale B?\n");
                scanf ("%d", &B);

                int sub = A - B;
                printf ("A subtracao de %d e %d foi: %d \n", A, B, sub);
            }

            if (opcao == 3) {

                break;
            }
            
        } while (opcao != 3);
    }