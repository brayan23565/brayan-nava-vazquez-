#include <stdio.h>

int main() {
    int carta;

    printf("Dame el numero de la carta: ");
    scanf("%d", &carta);

    switch (carta) {
        case 1:
            printf("Tu carta es un As\n");
            break;
        case 10:
            printf("Tu carta es Sota\n");
            break;
        case 11:
            printf("Tu carta es un Caballo\n");
            break;
        case 12:
            printf("Tu carta es Rey\n");
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
            printf("No es un numero de carta de la baraja española.\n");
    }

    return 0;
}

