#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50];
    char contrasena[50];
    int intentos = 3;

    while (intentos > 0) {
        printf("Ingrese su nombre: ");
        scanf("%s", nombre);

        printf("Ingrese su contraseña: ");
        scanf("%s", contrasena);

        if (strcmp(nombre, "root") == 0 && strcmp(contrasena, "1234") == 0) {
            printf("Bienvenido al sistema.\n");
            break;
        } else {
            printf("Nombre de usuario o contraseña incorrectos. ");
            printf("Le quedan %d intentos.\n", intentos - 1);
            intentos--;
        }
    }

    if (intentos == 0) {
        printf("Ha superado el número de intentos permitido.\n");
    }
    return 0;
}

