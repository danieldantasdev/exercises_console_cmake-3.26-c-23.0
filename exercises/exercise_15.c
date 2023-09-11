/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um ângulo em radianos e apresente-o convertido em graus.
 * A fórmula de conversão é G = R * (180 / pi),
 * sendo G o ângulo em graus e R em radianos, pi é 3.14
*/
#include <stdio.h>
#define PI 3.14

int exercise_15() {
    float x = 0;
    printf("%s", "Insira o ângulo em radianos: ");
    scanf("%f", &x);
    float result = x * (180 / PI);
    printf("O ângulo em graus é: %.2f", result);
    return 0;
}