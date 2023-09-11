/**
 * Created by danieldantasdev on 06/09/23.
 * Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.
*/
#include <stdio.h>

int exercise_28() {
    int x = 0, y = 0, z = 0;
    printf("%s", "Insira três números inteiros separados por espaço: ");
    scanf("%d %d %d", &x, &y, &z);
    int result = (x * x) + (y * y) + (z * z);
    printf("A área em metros quadrados é: %d", result);
    return 0;
}