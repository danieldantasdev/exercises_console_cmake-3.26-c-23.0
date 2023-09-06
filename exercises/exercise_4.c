/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um número real e imprima o quadrado desse número
*/
#include <stdio.h>

int exercise_4() {
    float x = 0;
    printf("%s", "Insira um número real: ");
    scanf("%f", &x);
    int result = x * x;
    printf("O quadrado é: %d", result);
    return 0;
}