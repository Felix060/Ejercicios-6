/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void polarToCartesian(double radius, double angle, double *x, double *y) {
    *x = radius * cos(angle);
    *y = radius * sin(angle);
}

int main() {
    double radius, angle, x, y;

    printf("Ingrese el radio: ");
    scanf("%lf", &radius);

    printf("Ingrese el ángulo en radianes: ");
    scanf("%lf", &angle);

    polarToCartesian(radius, angle, &x, &y);

    printf("Las coordenadas cartesianas correspondientes son: (%lf, %lf)\n", x, y);

    return 0;
}

