/**
 * Created by danieldantasdev on 06/09/23.
 * Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro.
 * O volume de um cilindro circular é calculado por meio da seguinte fórmula:
 * V = pi * raio² * altura, onde pi = 3.141592.
*/
#include <stdio.h>

#define PI 3.141592

int exercise_36() {
    float ray = 0, height = 0;
    printf("%s", "Insira o raio de um cilindro circular: ");
    scanf("%f", &ray);
    printf("%s", "Insira a altura de um cilindro circular: ");
    scanf("%f", &height);

    float result = (PI * (ray * ray) * height);

    printf("O volume do cilindro é: %.2f", result);
    return 0;
}