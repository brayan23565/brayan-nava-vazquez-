#include <stdio.h>

int main() {
    int numero_carta;

    printf("Introduce el número de la carta (2-12): ");
    scanf("%d", &numero_carta);

    switch (numero_carta) {
        case 1:
            printf("As (es un uno)\n");
            break;
        case 10:
            printf("Sota\n");
            break;
        case 11:
            printf("Caballo\n");
            break;
        case 12:
            printf("Rey\n");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("No es ninguna figura ni tampoco As\n");
            break;
        default:
            printf("Este no es un número de carta de la baraja española.\n");
    }

    return 0;
}

