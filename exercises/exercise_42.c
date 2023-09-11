/**
 * Created by danieldantasdev on 06/09/23.
 * Receba o salário-base de um funcionário. Calcule e imprima o salário a receber,
 * sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base.
 * Além disso, ele paga 7% de imposto sobre o salário-base.
*/
#include <stdio.h>

int exercise_42() {
    float salary_base = 0, result = 0;
    printf("%s", "Insira o salário base: ");
    scanf("%f", &salary_base);

    result = (salary_base + (salary_base / 10) * 0.5 - (salary_base / 10) * 0.7);

    printf("Salário com desconto de 7 porcento e graticaçao de 5 porcento é: %.2f", result);
    return 0;
}