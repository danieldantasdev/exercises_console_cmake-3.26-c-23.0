//
// Created by danieldantasdev on 06/09/23.
// Peça ao usuário para digitar 3 números inteiros e imprima a soma deles
//
#include <stdio.h>

int exercise_3() {
    int x, y, z = 0;
    printf("%s", "Informe três números inteiros: ");
    scanf("%d %d %d", &x, &y, &z);
    int sum = x + y + z;
    printf("A soma é: %d", sum);
    return 0;
}