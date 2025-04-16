// sizeof_types.c

#include <stdio.h>

int main() {
    // Types entiers
    printf("Taille de char : %zu octets\n", sizeof(char));
    printf("Taille de signed char : %zu octets\n", sizeof(signed char));
    printf("Taille de unsigned char : %zu octets\n", sizeof(unsigned char));

    printf("Taille de short : %zu octets\n", sizeof(short));
    printf("Taille de signed short : %zu octets\n", sizeof(signed short));
    printf("Taille de unsigned short : %zu octets\n", sizeof(unsigned short));

    printf("Taille de int : %zu octets\n", sizeof(int));
    printf("Taille de signed int : %zu octets\n", sizeof(signed int));
    printf("Taille de unsigned int : %zu octets\n", sizeof(unsigned int));

    printf("Taille de long int : %zu octets\n", sizeof(long int));
    printf("Taille de signed long int : %zu octets\n", sizeof(signed long int));
    printf("Taille de unsigned long int : %zu octets\n", sizeof(unsigned long int));

    printf("Taille de long long int : %zu octets\n", sizeof(long long int));
    printf("Taille de signed long long int : %zu octets\n", sizeof(signed long long int));
    printf("Taille de unsigned long long int : %zu octets\n", sizeof(unsigned long long int));

    // Types flottants (pas de version signée/non signée)
    printf("Taille de float : %zu octets\n", sizeof(float));
    printf("Taille de double : %zu octets\n", sizeof(double));
    printf("Taille de long double : %zu octets\n", sizeof(long double));

    return 0;
}
