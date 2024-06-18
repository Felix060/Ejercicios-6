/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

void divisionEntera(int dividendo, int divisor, int *cociente, int *resto) {
    *cociente = 0;
    *resto = dividendo;

    while (*resto >= divisor) {
        *resto = *resto - divisor;
        *cociente = *cociente + 1;
    }
}

int main() {
    int dividendo = 17;
    int divisor = 5;
    int cociente, resto;

    divisionEntera(dividendo, divisor, &cociente, &resto);

    printf("Dividendo: %d\n", dividendo);
    printf("Divisor: %d\n", divisor);
    printf("Cociente: %d\n", cociente);
    printf("Resto: %d\n", resto);

    return 0;
}

