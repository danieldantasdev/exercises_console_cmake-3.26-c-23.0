/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
*/
#include <stdio.h>

int exercise_32() {
    int x = 0;
    printf("%s", "Insira um número inteiro: ");
    scanf("%d", &x);

    int result = ((x + 1) * 3) + ((x - 1) * 2);

    printf("A soma do sucessor do triplo de %d com o antecessor de %d do dobro é: %d", x, x, result);
    return 0;
}