//
// Created by danieldantasdev on 06/09/23.
// Leia um número real e imprima a quinta parte desse número
//
#include <stdio.h>

int exercise_5() {
    float x = 0;
    printf("%s", "Insira um número real: ");
    scanf("%f", &x);
    float result = x / 5;
    printf("A quinta parte é: %.2f", result);
    return 0;
}