/**
 * Created by danieldantasdev on 06/09/23.
 * Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/
#include <stdio.h>

int exercise_33() {
    float x = 0;
    printf("%s", "Insira um lado do quadrado: ");
    scanf("%f", &x);

    float result = x * x;

    printf("A área do quadrado é: %.2f", result);
    return 0;
}