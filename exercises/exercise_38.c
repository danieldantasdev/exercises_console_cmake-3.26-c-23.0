/**
 * Created by danieldantasdev on 06/09/23.
 * Leia o salário de um funcionário. Galcule e imprima o valor do novo salário,
 * sabendo que ele recebeu um aumento de 25%.
*/
#include <stdio.h>

int exercise_38() {
    float salary = 0;
    printf("%s", "Insira o valor do salário: ");
    scanf("%f", &salary);

    float result = (salary + (salary / 10.0) * (25.00 / 10.0));

    printf("O valor do salário com aumento de 12% é: %.2f", result);
    return 0;
}