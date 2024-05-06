#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, menor;
    
    
    printf("Ingrese cinco numeros enteros:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    
    menor = num1;
    
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    if (num4 < menor) {
        menor = num4;
    }
    if (num5 < menor) {
        menor = num5;
    }
    
    
    printf("El menor numero es: %d\n", menor);
    
    return 0;
}
