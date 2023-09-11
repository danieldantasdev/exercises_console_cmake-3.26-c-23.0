/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor em comprimento em polegadas e apresente-o convertido em centímetros.
 * A fórmula de conversão é C = P * 2.54,
 * sendo G o comprimento em centímetros e P em polegadas.
*/
#include <stdio.h>

int exercise_16() {
    float x = 0;
    printf("%s", "Insira o comprimento em polegadas: ");
    scanf("%f", &x);
    float result = x * 2.54;
    printf("O comprimento em centímetros é: %.2f", result);
    return 0;
}