#include <stdio.h>

int main() {
    int n, i;
    int u0 = 0, u1 = 1, un;

    printf("Entrez la valeur de n (nombre de termes à afficher, à partir de U0) : ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("Suite de Fibonacci jusqu'à U%d : ", n);
        for (i = 0; i <= n; i++) {
            if (i == 0) {
                printf("%d", u0);
            } else if (i == 1) {
                printf(", %d", u1);
            } else {
                un = u0 + u1;
                printf(", %d", un);
                u0 = u1;
                u1 = un;
            }
        }
        printf("\n");
    } else {
        printf("Veuillez entrer une valeur de n >= 1\n");
    }

    return 0;
}
