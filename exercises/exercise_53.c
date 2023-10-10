/**
 * Created by danieldantasdev on 10/10/23.
 * Faça um programa para ler as dimensões de um terreno (comprimento c e largura /),
 * bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
 * com tela.
*/

#include <stdio.h>

int exercise_53() {
    float comprimento = 0.0, largura = 0.0, precoMetroTela = 0.0;

    printf("Digite o comprimento do terreno (metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (metros): ");
    scanf("%f", &largura);

    printf("Digite o preço do metro de tela (por metro): ");
    scanf("%f", &precoMetroTela);

    float perimetro = 2 * (comprimento + largura);
    float custoTotal = perimetro * precoMetroTela;

    printf("O custo para cercar o terreno com tela é: %.2f\n", custoTotal);

    return 0;
}