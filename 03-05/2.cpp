#include <stdio.h>

int main() {
    int numero, suma = 0, contador = 0;
    
    do {
        printf("Introduce un numero: ");
        scanf("%d", &numero);
        
        if (numero != 0) {
            printf("Has introducido el numero %d.\n", numero);
            suma += numero;
            contador++;
        } else {
            printf("Finalizando: Se ha introducido el numero 0.\n");
        }
        
    } while (numero != 0);
    
    printf("Se han introducido %d numeros.\n", contador);
    printf("La suma de los numeros introducidos es: %d\n", suma);
    return 0;
}

