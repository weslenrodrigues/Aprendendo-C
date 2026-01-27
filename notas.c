#include <stdio.h>

int main (){

    float notaAluno = 0;

    printf ("Qual foi a sua nota na ultima prova? \n");
    scanf ("%f", &notaAluno);

    if (notaAluno >= 7) {

        printf ("Voce foi aprovado, parabens!\n");
    } else { 
        
        if (notaAluno >= 4 && notaAluno < 7) {

        printf ("Voce tem direito a uma prova de recuperacao.\n");
    } else {
        printf ("Infelizmente voce foi reprovado nesta materia.\n");
    }
}

    return 0;
}