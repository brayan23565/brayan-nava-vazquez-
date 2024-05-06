#include <stdio.h>
#include <math.h>

int main() {
    int opcion;
    float base, altura, lado1, lado2, baseMayor, baseMenor, area;

    printf("CALCULO DE AREAS\n");
    printf("1 - Calcular el area de un triangulo\n");
    printf("2 - Calcular el area de un trapecio\n");
    printf("3 - Calcular el area de un rectangulo\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la base del triangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El area del triangulo es: %.2f\n", area);
            break;
        case 2:
            printf("Ingrese la base mayor del trapecio: ");
            scanf("%f", &baseMayor);
            printf("Ingrese la base menor del trapecio: ");
            scanf("%f", &baseMenor);
            printf("Ingrese la altura del trapecio: ");
            scanf("%f", &altura);
            area = ((baseMayor + baseMenor) * altura) / 2;
            printf("El area del trapecio es: %.2f\n", area);
            break;
        case 3:
            printf("Ingrese la base del rectangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("El area del rectangulo es: %.2f\n", area);
            break;
        default:
            printf("Opcion invalida\n");
    }

    return 0;
}

