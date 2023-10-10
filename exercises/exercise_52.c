/**
 * Created by danieldantasdev on 10/10/23.
 * Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
 * porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
 * que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
 * ganharia do prêmio com base no valor investido.
*/

#include <stdio.h>

int exercise_52() {
    float investimento1 = 0.0, investimento2 = 0.0, investimento3 = 0.0, premio = 0.0;

    printf("Digite o valor investido pelo primeiro amigo: ");
    scanf("%f", &investimento1);

    printf("Digite o valor investido pelo segundo amigo: ");
    scanf("%f", &investimento2);

    printf("Digite o valor investido pelo terceiro amigo: ");
    scanf("%f", &investimento3);

    printf("Digite o valor total do prêmio: ");
    scanf("%f", &premio);

    float totalInvestido = investimento1 + investimento2 + investimento3;
    float parte1 = (investimento1 / totalInvestido) * premio;
    float parte2 = (investimento2 / totalInvestido) * premio;
    float parte3 = (investimento3 / totalInvestido) * premio;

    printf("O primeiro amigo ganharia: %.2f\n", parte1);
    printf("O segundo amigo ganharia: %.2f\n", parte2);
    printf("O terceiro amigo ganharia: %.2f\n", parte3);

    return 0;}