/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor de área em acres e apresente-o convertido em metros quadrados m².
 * A fórmula de conversão é: M = A * 4048,58,
 * sendo M a área em metros quadrados e A a área em acres.
*/
#include <stdio.h>

int exercise_25() {
    float x = 0;
    printf("%s", "Insira o comprimento em acres: ");
    scanf("%f", &x);
    float result = x * 4048.58;
    printf("O comprimento em metros quadrados é: %.2f", result);
    return 0;
}