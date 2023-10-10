/**
 * Created by danieldantasdev on 10/10/23.
 * Escreva um programa que leia as coordenadas + e y de pontos no 7º? e calcule sua distância da origem (0.0).
*/

#include <stdio.h>
#include <math.h>

int exercise_51() {
    double x = 0.0, y = 0.0;

    printf("Digite as coordenadas (x, y): ");
    scanf("%lf %lf", &x, &y);

    double distancia = sqrt((x * x) + (y * y));

    printf("A distância da origem é: %.2lf\n", distancia);

    return 0;
}