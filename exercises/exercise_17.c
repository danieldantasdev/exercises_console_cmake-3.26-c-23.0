/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor em comprimento em centímetros e apresente-o convertido em polegadas.
 * A fórmula de conversão é P = C / 2.54,
 * sendo G o comprimento em centímetros e P em polegadas.
*/
#include <stdio.h>

int exercise_17() {
    float x = 0;
    printf("%s", "Insira o comprimento em centímetros: ");
    scanf("%f", &x);
    float result = x / 2.54;
    printf("O comprimento em polegadas é: %.2f", result);
    return 0;
}