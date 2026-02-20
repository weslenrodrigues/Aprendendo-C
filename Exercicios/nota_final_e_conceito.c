#include <stdio.h>

int main () {

    float notaLab, notaAvaliacao, notaExame, notaTotal;

    printf ("Insira sua nota no Trabalho de laboratorio (0-10):\n");
    scanf ("%f", &notaLab);
    notaLab = notaLab * 0.2;

    printf ("Insira sua nota na Avaliacao semestral (0-10):\n");
    scanf ("%f", &notaAvaliacao);
    notaAvaliacao = notaAvaliacao * 0.3;

    printf ("Insira sua nota no Exame final (0-10):\n");
    scanf ("%f", &notaExame);
    notaExame = notaExame * 0.5;

    notaTotal = notaLab + notaAvaliacao + notaExame;

    if (notaTotal > 10 || notaTotal < 0) {

        printf ("Erro: Nota invalida");
        return 0;
    }


    printf ("Sua nota final foi:\n%f\n", notaTotal);

    if (notaTotal >= 0 && notaTotal < 5) {

        printf ("Seu conceito foi: E");
    }

    if (notaTotal >= 5 && notaTotal < 6) {

        printf ("Seu conceito foi: D");
    }

    if (notaTotal >= 6 && notaTotal < 7) {

        printf ("Seu conceito foi: C");
    }

    if (notaTotal >= 7 && notaTotal < 8) {

        printf ("Seu conceito foi: B");
    }

    if (notaTotal >= 8 && notaTotal < 10) {

        printf ("Seu conceito foi: A");
    }

    return 0;
}
