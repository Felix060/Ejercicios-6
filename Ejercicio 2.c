/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int leerEnteroConLimites(int limiteInferior, int limiteSuperior) {
    int valor;

    do {
        printf("Ingrese un valor entero entre %d y %d: ", limiteInferior, limiteSuperior);
        scanf("%d", &valor);

        if (valor < limiteInferior || valor > limiteSuperior) {
            printf("El valor ingresado no está dentro de los límites.\n");
        }
    } while (valor < limiteInferior || valor > limiteSuperior);

    return valor;
}

int main() {
    int limiteInferior = 0;
    int limiteSuperior = 100;
    int valor;

    valor = leerEnteroConLimites(limiteInferior, limiteSuperior);

    printf("El valor ingresado es: %d\n", valor);

    return 0;
}
