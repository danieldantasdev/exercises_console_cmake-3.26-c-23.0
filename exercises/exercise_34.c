/**
 * Created by danieldantasdev on 06/09/23.
 * Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.
 * área do círculo é pi * raio², considere x = 3.141592,
*/
#include <stdio.h>
#define PI 3.141592

int exercise_34() {
    float raio = 0;
    printf("%s", "Insira o valor do raio do círculo: ");
    scanf("%f", &raio);

    float result = PI * (raio * raio);

    printf("A área do círculo é: %.2f", result);
    return 0;
}