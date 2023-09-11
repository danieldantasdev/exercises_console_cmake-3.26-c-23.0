/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor de área em metros quadrados m² e apresente-o convertido em acres.
 * A fórmula de conversão é: A = M * 0,000247,
 * sendo M a área em metros quadrados e A a área em acres.
*/
#include <stdio.h>

int exercise_24() {
    float x = 0;
    printf("%s", "Insira o comprimento em metros quadrados: ");
    scanf("%f", &x);
    float result = x * 0.000247;
    printf("O comprimento em acres é: %.2f", result);
    return 0;
}