#include <stdio.h>

int main() {
    int n, i;
    int u0 = 0, u1 = 1, un;

    printf("Entrez la valeur de n (nombre de termes à afficher, à partir de U0) : ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("Suite de Fibonacci jusqu'à U%d : ", n);
        for (i = 0
