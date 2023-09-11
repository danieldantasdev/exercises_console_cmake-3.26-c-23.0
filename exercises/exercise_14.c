/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um ângulo em graus e apresente-o convertido em radianos.
 * A fórmula de conversão é R = G * (pi / 180),
 * sendo G o ângulo em graus e R em radianos, pi é 3.14
*/
#include <stdio.h>
#define PI 3.14

int exercise_14() {
    float x = 0;
    printf("%s", "Insira o ângulo em graus: ");
    scanf("%f", &x);
    float result = x * (PI / 180);
    printf("O ângulo em radianos é: %.2f", result);
    return 0;
}