/**
 * Created by danieldantasdev on 10/10/23.
 * Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/

#include <stdio.h>

int exercise_47() {
    int numero = 0, numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0;

    printf("Digite um numero inteiro de 4 digitos positivo: ");
    scanf("%d", &numero);

    if(numero >= 1000 && numero <= 9999) {
        numero1 = numero / 1000;
        numero2 = (numero / 100) % 10;
        numero3 = (numero / 10) % 10;
        numero4 = numero % 10;

        printf("Dígito 1: %d\n", numero1);
        printf("Dígito 2: %d\n", numero2);
        printf("Dígito 3: %d\n", numero3);
        printf("Dígito 4: %d\n", numero4);
    } else {
        printf("O número está fora dos intervalos");
    }

    return 0;
}