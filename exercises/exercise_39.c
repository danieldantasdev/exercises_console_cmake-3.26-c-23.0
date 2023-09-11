/**
 * Created by danieldantasdev on 06/09/23.
 * A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
 * Sendo que da quantia total:
 *
 * - O primeiro ganhador receberá 46%;
 * - O segundo receberá 32%;
 * - O terceiro receberá o restante;
 *
 * Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/
#include <stdio.h>

#define AWARD 780.000

int exercise_39() {
    float people_1 = 0, people_2 = 0, people_3 = 0;

    people_1 = ((AWARD / 10.0) * (46.0 / 10.0));
    people_2 = ((AWARD / 10.0) * (32.0 / 10.0));
    people_3 = ((AWARD / 10.0) * (22.0 / 10.0));

    printf("O valor da pessoa 1 é: %.2f", people_1);
    printf("\nO valor da pessoa 2 é: %.2f", people_2);
    printf("\nO valor da pessoa 3 é: %.2f", people_3);
    return 0;
}