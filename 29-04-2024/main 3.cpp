#include <stdio.h>
#include <math.h>

int main() {
    int opcion;
    float base, altura, lado1, lado2, area;

    printf("CALCULO DE AREAS\n");
    printf("1 - Calcula el area de un triangulo\n");
    printf("2 - Calcula el area de un trapecio\n");
    printf("3 - Calcula el area de un rectangulo\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("introduce la base del triangulo: ");
            scanf("%f", &base);
            printf("introduce la altura del triangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El area del triangulo es: %.2f\n", area);
            break;
        case 2:
            printf("introduce la base mayor del trapecio: ");
            scanf("%f", &base);
            printf("introduce la base menor del trapecio: ");
            scanf("%f", &altura);
            printf("introduce la altura del trapecio: ");
            scanf("%f", &lado1);
            area = ((base + altura) * lado1) / 2;
            printf("El area del trapecio es: %.2f\n", area);
            break;
        case 3:
            printf("introduce la base del rectangulo: ");
            scanf("%f", &base);
            printf("introduce la altura del rectangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("El area del rectangulo es: %.2f\n", area);
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}
