/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor de massa em libras e apresente-o convertido em quilogramas.
 * A fórmula de conversão é: K = L * 0.45.
 * sendo K a massa em quilogramas e L a massa em libras.
*/
#include <stdio.h>

int exercise_21() {
    float x = 0;
    printf("%s", "Insira o massa em libras: ");
    scanf("%f", &x);
    float result = x * 0.45;
    printf("A massa em quilogramas é: %.2f", result);
    return 0;
}