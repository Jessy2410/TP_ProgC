// variables.c

#include <stdio.h>

int main() {
    // Types char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // Types short
    short s = -1234;
    signed short ss = -5678;
    unsigned short us = 43210;

    // Types int
    int i = -123456;
    signed int si = -654321;
    unsigned int ui = 123456;

    // Types long int
    long int li = -123456789L;
    signed long int sli = -987654321L;
    unsigned long int uli = 123456789UL;

    // Types long long int
    long long int lli = -1234567890123LL;
    signed long long int slli = -9876543210987LL;
    unsigned long long int ulli = 1234567890123ULL;

    // Types flottants
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    // Affichage
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("short : %hd\n", s);
    printf("signed short : %hd\n", ss);
    printf("unsigned short : %hu\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float : %.2f\n", f);
    printf("double : %.9f\n", d);
    printf("long double : %.10Lf\n", ld);

    return 0;
}
