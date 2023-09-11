/**
 * Created by danieldantasdev on 06/09/23.
 * Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/
#include <stdio.h>

int exercise_29() {
    float x = 0, y = 0, z = 0, w = 0;
    printf("%s", "Insira quatro notas (separados por espaço): ");
    scanf("%f %f %f %f", &x, &y, &z, &w);
    float result = (x + y + z + w) / 4;
    printf("A área em metros quadrados é: %.2f", result);
    return 0;
}