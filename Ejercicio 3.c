/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
   
int obtenerValorAbsoluto(int numero) {
    if (numero < 0) {
        return -numero;
    } else {
        return numero;
    }
}

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int valorAbsoluto = obtenerValorAbsoluto(numero);
    printf("El valor absoluto de %d es %d\n", numero, valorAbsoluto);

    return 0;
}
