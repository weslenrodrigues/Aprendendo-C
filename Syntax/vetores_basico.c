#include <stdio.h>

int main() {

//    int dados[6] = {10,20,30,40,50,60};
//    int media = (dados[0] + dados[1] + dados[2] + dados[3] + dados[4]+ dados[5])/6;
//    printf ("A media entre os todos os dados fornecidos foi: %d\n", media);

    int dados[6] = {60,70,80,90,100,110};
    int media = 0;
    int i = 0;

    for (i=0; i<6; i++) {

        media += dados[i];
    }
    printf ("A media entre os todos os dados fornecidos foi: %d\n", media/6);
}