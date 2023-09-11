/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor de massa em quilogramas e apresente-o convertido em libras.
 * A fórmula de conversão é: L = K / 0.45.
 * sendo K a massa em quilogramas e L a massa em libras.
*/
#include <stdio.h>

int exercise_20() {
    float x = 0;
    printf("%s", "Insira o massa em quilogramas: ");
    scanf("%f", &x);
    float result = x / 0.45;
    printf("A massa em libras é: %.2f", result);
    return 0;
}