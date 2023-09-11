/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/
#include <stdio.h>

int exercise_31() {
    int x = 0;
    printf("%s", "Insira um número inteiro: ");
    scanf("%d", &x);

    int predecessor = x - 1, successor = x + 1;

    printf("O antecessor de %d é: %d", x, predecessor);
    printf("\nO sucessor de %d é: %d", x, successor);
    return 0;
}