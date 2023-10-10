/**
 * Created by danieldantasdev on 10/10/23.
 * Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/

#include <stdio.h>

int exercise_48() {
    int numero = 0, segundo = 0, minuto = 0, hora = 0;
    printf("Insira o número: ");
    scanf("%d", &numero);

    hora = numero / 3600;
    minuto = numero / 60;
    segundo = numero;

    printf("\nHora: %d", hora);
    printf("\n\nMinuto: %d", minuto);
    printf("\n\nSegundo: %d", segundo);

    return 0;
}