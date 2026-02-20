#include <stdio.h>
int main (){

#define texto "Digite seus dados abaixo:\n"
#define texto2 "Vamos revisar seus dados\n"

    int idade = 0;
    char nome [50];
    float altura = 0.0;
    float peso = 0.0;

    printf("%s", texto);
    
    printf("Digite seu nome\n");
    scanf("%s", nome); // char não precisa de "&"

    printf("Digite sua idade\n");
    scanf("%d", &idade); // os outros já precisam de "&"

    printf("Digite sua altura\n");
    scanf("%f", &altura);

    printf ("Digite seu peso\n");
    scanf("%f", &peso);

    printf("%s", texto2);

    printf("Seu nome: %s \n", nome); // nãow usar "&" nos prinf, pois eles precisam de um valor e não de um endereço. 
//O scanf da um valor mas precisa de endereço, por isto eles usam o "&", já os printf precisam de um valor.
    printf ("Sua idade: %d \n", idade);
    printf ("Sua altura (cm): %.2f \n", altura);
    printf ("Seu peso (kg): %.2f \n", peso);

    return 0;

}