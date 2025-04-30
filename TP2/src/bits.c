#include <stdio.h>

int main() {
    unsigned int d;
    int bit4, bit20;

    printf("Entrez un entier non signé (unsigned int) : ");
    scanf("%u", &d);

    bit4 = (d >> (32 - 4)) & 1;
    bit20 = (d >> (32 - 20)) & 1;

    // Affichage du résultat
    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
