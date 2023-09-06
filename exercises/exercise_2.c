/**
 * Created by danieldantasdev on 06/09/23.
 * Faça um programa que leia um número real e o imprima
*/
#include <stdio.h>

int exercise_2() {
    float x = 0;
    printf("%s", "Informe um número real: ");
    scanf("%f", &x);
    printf("Você inseriu: %.1f\n", x);
    return 0;
}