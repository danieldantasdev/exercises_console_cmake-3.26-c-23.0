/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor de área em hectares e apresente-o convertido em metros quadrados m².
 * A fórmula de conversão é: M = H * 10000,
 * sendo M a área em metros quadrados e H a área em hectares.
*/
#include <stdio.h>

int exercise_27() {
    float x = 0;
    printf("%s", "Insira área em hectares quadrados: ");
    scanf("%f", &x);
    float result = x * 10000;
    printf("A área em metros quadrados é: %.2f", result);
    return 0;
}