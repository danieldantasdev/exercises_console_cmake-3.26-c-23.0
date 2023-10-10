/**
 * Created by danieldantasdev on 10/10/23.
 * Faça um programa para converter uma letra maiúscula em letra minúscula.
 * Use a tabela ASCII para resolver o problema.
 */

#include <stdio.h>

int exercise_45() {
    char maiuscula = 0, minuscula = 0;
    printf("Insira a letra maiúscula para ser convertida em minúscula: ");
    scanf("%c", &maiuscula);
    printf("A letra maiúscula é: %c\n\n", maiuscula);

    minuscula = maiuscula + 32;
    printf("A letra minúscula convertida é: %c", minuscula);

    return 0;
}