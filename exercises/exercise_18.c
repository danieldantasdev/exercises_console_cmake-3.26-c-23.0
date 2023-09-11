/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros.
 * A fórmula de conversão é: L = 1000 + M,
 * sendo L o volume em litros e M o volume em metros cúbicos.
*/
#include <stdio.h>

int exercise_18() {
    float x = 0;
    printf("%s", "Insira o volume em metros cúbicos: ");
    scanf("%f", &x);
    float result = 1000 + x;
    printf("O volume em litros é: %.2f", result);
    return 0;
}