#include <stdio.h>

int main () {

    int linha;
    int coluna;

    int linhasUsuario;
    int colunasUsuario;
    
    printf ("Quantas linhas voce quer na matriz?\n");
    scanf ("%d", &linhasUsuario);
    
    printf ("Quantas colunas voce quer na matriz?\n");
    scanf("%d", &colunasUsuario);
    
    int contador = 1;
    int matriz [linhasUsuario] [colunasUsuario];
    
    for (linha = 0; linha < linhasUsuario; linha++) {
        
        for (coluna = 0; coluna < colunasUsuario; coluna++) {
            
            matriz[linha] [coluna] = contador;
            contador++;
        }
    }
    

    for (linha = 0; linha < linhasUsuario; linha++) {

        for(coluna = 0; coluna < colunasUsuario; coluna++) {

            printf ("%d ", matriz [linha] [coluna]);
        }
        printf ("\n");
    }

}