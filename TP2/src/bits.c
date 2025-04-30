#include <stdio.h>

int main() {
    unsigned int d = 0x10000008;
    int bit4, bit20;

    bit4 = (d >> (32 - 4)) & 1;
    bit20 = (d >> (32 - 20)) & 1;

    // Vérification
    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
