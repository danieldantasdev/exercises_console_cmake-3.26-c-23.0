/**
 * Created by danieldantasdev on 06/09/23.
 * Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
 * hipotenusa = raiz(a² + b²).
 * Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação.
*/
#include <stdio.h>
#include <math.h>

double squareRoot(double n, double precision);

int exercise_35() {
    float a = 0, b = 0;
    printf("%s", "Insira os valores de a e b: ");
    scanf("%f %f", &a, &b);

    float result = ((a * a) + (b * b));
    float h = squareRoot(result, 0.00001);

    printf("A Hipotenusa é: %.2f", h);
    return 0;
}

double squareRoot(double n, double precision) {
    double xn = n; // Estimativa inicial igual a N
    double xn1;

    do {
        xn1 = 0.5 * (xn + n / xn); // Calcula a nova estimativa

        // Verifica se a diferença entre Xn1 e Xn é menor que a precisão desejada
        if (fabs(xn1 - xn) < precision) {
            break; // A estimativa convergiu o suficiente
        }

        xn = xn1; // Atualiza a estimativa anterior com a nova estimativa
    } while (1);

    return xn1; // Retorna a estimativa final como a raiz quadrada
}