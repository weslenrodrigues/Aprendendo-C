#include <stdio.h> 
int main() {
    int numero;

    do {
        printf("Digite um numero de 0 a 10: ");
        scanf("%d", &numero);
        
        if (numero > 10 || numero < 0) {
            printf("Coloque um numero valido\n");
        }
    } while (numero < 0 || numero > 10);
    
    printf("\nVoce digitou %d\n", numero);

    return 0;
}