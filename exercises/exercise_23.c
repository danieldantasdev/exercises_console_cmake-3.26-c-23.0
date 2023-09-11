/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor de comprimento em metros e apresente-o convertido em jardas.
 * A fórmula de conversão é: J = M / 0.91
 * sendo J o comprimento em jardas e M o comprimento em metros.
*/
#include <stdio.h>

int exercise_23() {
    float x = 0;
    printf("%s", "Insira o comprimento em metros: ");
    scanf("%f", &x);
    float result = x / 0.91;
    printf("O comprimento em jardas é: %.2f", result);
    return 0;
}