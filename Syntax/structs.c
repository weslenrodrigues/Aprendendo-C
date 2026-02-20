#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

struct player_dados {

    char nome [50];
    int forca;
    int inteligencia;
    int destreza;
};

typedef struct player_dados player;

int main () {

    player dados = {"Nome", 0, 0, 0};

    printf ("Seja bem-vindo ao sistema de criacao de personagem\n");

    printf("Qual o nome do seu personagem?:\n");
    scanf("%49s", dados.nome);



    printf("Quantos pontos voce quer colocar em forca? (maximo e 10):\n");
    scanf ("%d", &dados.forca);
    if (dados.forca > 10) {

        printf("Quantidade de pontos excedida, ta bom hulk, agora tenta novamente.\n");
    } else if (dados.forca < 0) {

        printf ("Voce nao e tao fraco assim.\n");
    }



    printf("Quantos pontos voce quer colocar em inteligencia? (maximo e 10):\n");
    scanf ("%d", &dados.inteligencia);
    if (dados.inteligencia > 10) {

        printf("Quantidade de pontos excedida, voce nao e um genio.\n");
    } else if (dados.inteligencia < 0) {

        printf ("Voce nao e tao burro assim.\n");
    }



     printf("Quantos pontos voce quer colocar em destreza? (maximo e 10):\n");
    scanf ("%d", &dados.destreza);
    if (dados.inteligencia > 10) {

        printf("Quantidade de pontos excedida, acha mesmo que tu e o flash??.\n");
    } else if (dados.inteligencia < 0) {

        printf ("Voce nao e tao lento assim.\n");
    }

    system("cls");
    
    printf ("=========== Status ===========\n");
    printf ("Nome: %s\n", dados.nome);
    printf ("Forca: %d\n", dados.forca);
    printf ("Inteligencia: %d\n", dados.inteligencia);
    printf ("Destreza: %d\n", dados.destreza);
    printf ("==============================\n");

}