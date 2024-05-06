		#include <stdio.h>

int main() {
    float horas_trabajadas, precio_hora, salario_semanal;
    printf("Ingrese las horas trabajadas esta semana: ");
    scanf("%f", &horas_trabajadas);

    printf("Ingrese el precio por hora: ");
    scanf("%f", &precio_hora);

    float horas_normales = 40;
    float horas_extra_50 = 50;
    float precio_extra_50 = precio_hora * 1.5;
    float precio_extra_doble = precio_hora * 2;

    if (horas_trabajadas <= horas_normales) {
        salario_semanal = horas_trabajadas * precio_hora;
    } else if (horas_trabajadas <= horas_extra_50) {
        salario_semanal = (horas_normales * precio_hora) + 
                          ((horas_trabajadas - horas_normales) * precio_extra_50);
    } else {
        salario_semanal = (horas_normales * precio_hora) +
                          ((horas_extra_50 - horas_normales) * precio_extra_50) +
                          ((horas_trabajadas - horas_extra_50) * precio_extra_doble);
    }
    printf("El salario semanal es: %.2f\n", salario_semanal);

    return 0;
}

