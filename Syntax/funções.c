#include <stdio.h>

int maior (int num1,int num2) {

    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main (){

int i = 0;
int tamanho = 0;

    printf ("Quantas pessoas existem na sua familia?\n");
    scanf ("%d", &tamanho);
    fflush (stdin);
    int pessoas [tamanho];

    for (i = 0; i < tamanho; i++) {

        printf ("Qual a idade do membro %d?\n", i+1);
        scanf ("%d", &pessoas[i]);
        fflush (stdin);
    }

    int maiorIdade = 0;
    int maiorPosicao = 0;
    int resultado = 0;

    for (i = 0; i < tamanho; i++) {

        resultado = maior(maiorIdade, pessoas[i]);

        if (resultado != maiorIdade) {
            maiorIdade = resultado;
            maiorPosicao = i+1;
       }
    
        }
        
        printf ("O membro %d teve a maior idade de todos, com %d anos\n", maiorPosicao, maiorIdade);
    }