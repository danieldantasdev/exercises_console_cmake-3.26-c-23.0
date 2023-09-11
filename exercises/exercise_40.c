/**
 * Created by danieldantasdev on 06/09/23.
 * Uma empresa contrata um encanador a R$30,00 por dia.
 * Faça um programa que solicite o número de dias trabalhados pelo encanador
 * e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.
*/
#include <stdio.h>

int exercise_40() {
    int day = 0;
    float result = 0;
    printf("%s", "Insira os dias trabalhados: ");
    scanf("%d", &day);

    result = (day * 30) - ((day * 30) / 10) * 0.8;

    printf("Trabalhou por %d recebendo %.2f com 8 porcento de desconto.", day, result);
    return 0;
}