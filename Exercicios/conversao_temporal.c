#include <stdio.h>

int main () {

    int tempoSegundos, tempoMinutos, tempoHoras;
    
    printf ("Insira o tempo em segundos:\n");
    scanf ("%d", &tempoSegundos);

    tempoMinutos = tempoSegundos / 60;
    tempoSegundos = tempoSegundos - tempoMinutos*60;
    tempoHoras = tempoMinutos / 60;
    tempoMinutos = tempoMinutos - tempoHoras*60;

    printf ("Tempo em segundos: %d\n", tempoSegundos);
    printf ("Tempo em minutos: %d\n", tempoMinutos);
    printf ("Tempo em horas: %d\n", tempoHoras);
    
    return 0;
}