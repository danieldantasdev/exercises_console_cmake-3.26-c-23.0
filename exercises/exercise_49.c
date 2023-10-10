/**
 * Created by danieldantasdev on 10/10/23.
 * Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duração, em
 * segundos, de uma experiência biológica. O programa deve resultar com o novo horário
 * (hora, minuto e segundo) do termino da mesma.
*/

#include <stdio.h>

int exercise_49() {
    int horaInicio = 0, minutoInicio = 0, segundoInicio = 0, duracaoSegundos = 0;

    printf("Digite o horário de início (hh mm ss): ");
    scanf("%d %d %d", &horaInicio, &minutoInicio, &segundoInicio);

    printf("Digite a duração em segundos: ");
    scanf("%d", &duracaoSegundos);

    int horarioInicioSegundos = horaInicio * 3600 + minutoInicio * 60 + segundoInicio;

    int horarioTerminoSegundos = horarioInicioSegundos + duracaoSegundos;

    int horaTermino = horarioTerminoSegundos / 3600;
    int minutoTermino = (horarioTerminoSegundos % 3600) / 60;
    int segundoTermino = horarioTerminoSegundos % 60;

    printf("Horário de término: %02d:%02d:%02d\n", horaTermino, minutoTermino, segundoTermino);

    return 0;
}