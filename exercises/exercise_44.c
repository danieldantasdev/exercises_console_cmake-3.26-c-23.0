/**
 * Created by danieldantasdev on 10/10/23.
 * Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
 * subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
 * seu objetivo.
*/
#include <stdio.h>

int exercise_44() {
    float alturaDegrau = 0, alturaUsuario = 0, resultado = 0;

    printf("Insira a altura do degrau: ");
    scanf("%f", &alturaDegrau);
    printf("A altura do degrau é: %.2f", alturaDegrau);

    printf("\n\nInsira a altura que o usuário deseja alcançar: ");
    scanf("%f", &alturaUsuario);
    printf("A altura desejada pelo usuário é: %.2f", alturaUsuario);

    resultado = alturaDegrau - alturaUsuario;
    printf("\n\nO usuário deve subir %.2f degraus para atingir seu objetivo", resultado);
    return 0;
}