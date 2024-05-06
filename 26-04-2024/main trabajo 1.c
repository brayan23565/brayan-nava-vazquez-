#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Ingrese tres numeros enteros de una cifra:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 == 1 && num2 == 2 && num3 == 3) {
        printf("Acceso permitido.\n");
    } else {
        printf("Acceso denegado.\n");
    }
    
    return 0;
}
