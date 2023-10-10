/**
 * Created by danieldantasdev on 10/10/23.
 * 46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999).
 * Gere outro número formado pelos dígitos invertidos do número lido.
 * Exemplo:
 * NúmeroLido = 123
 * NúmeroGerado = 321.
*/

#include <stdio.h>

int exercise_46() {
    int numero = 0, numero1 = 0, numero2 = 0, numero3 = 0;
    printf("Digite um numero inteiro de 3 digitos positivo: ");
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) {
        numero1 = numero % 10;
        numero = numero / 10;

        numero2 = numero % 10;
        numero = numero / 10;

        numero3= numero % 10;
        numero= numero / 10;

        printf("\n\naqui: %d\n\n", numero1);

        printf("%d%d%d\n", numero1, numero2, numero3);
    } else {
        printf("O número está fora dos intervalos");
    }
    return 0;
}