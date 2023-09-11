/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor de comprimento em jardas e apresente-o convertido em metros.
 * A fórmula de conversão é: M = 0,91 * J,
 * sendo J o comprimento em jardas e M o comprimento em metros.
*/
#include <stdio.h>

int exercise_22() {
    float x = 0;
    printf("%s", "Insira o comprimento em jardas: ");
    scanf("%f", &x);
    float result = 0.91 * x;
    printf("O comprimento em metros é: %.2f", result);
    return 0;
}