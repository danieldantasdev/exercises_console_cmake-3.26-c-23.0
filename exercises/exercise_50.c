/**
 * Created by danieldantasdev on 10/10/23.
 * Implemente um programa que calcule o ano de nascimento
 * de uma pessoa a partir de sua idade e do ano atual.
*/

#include <stdio.h>
#include <time.h>

int exercise_50() {
    int idade = 0, anoAtual = 0;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    anoAtual = tm.tm_year + 1900; // Adicione 1900 para obter o ano atual

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    int anoNascimento = anoAtual - idade;

    printf("Seu ano de nascimento é: %d\n", anoNascimento);

    return 0;
}