/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³.
 * A fórmula de conversão é: M = L / 1000,
 * sendo L o volume em litros e M o volume em metros cúbicos.
*/
#include <stdio.h>

int exercise_19() {
    float x = 0;
    printf("%s", "Insira o volume em litros: ");
    scanf("%f", &x);
    float result = x / 1000;
    printf("O volume em metros cúbicos é: %.2f", result);
    return 0;
}