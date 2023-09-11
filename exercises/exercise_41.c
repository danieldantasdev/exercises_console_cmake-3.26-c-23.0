/**
 * Created by danieldantasdev on 06/09/23.
 * Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês.
 * Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.
*/
#include <stdio.h>

int exercise_41() {
    float hour_job = 0, hour_for_month = 0, result = 0;
    printf("%s", "Insira o valor da hora de trabalho (em reais): ");
    scanf("%f", &hour_job);

    printf("%s", "Insira quantas horas trabalhadas por mês: ");
    scanf("%f", &hour_for_month);

    result = ((hour_job * hour_for_month) - ((hour_job * hour_for_month) / 10) * (10 / 10));

    printf("Salário com desconto de 10 porcento é: %.2f", result);
    return 0;
}