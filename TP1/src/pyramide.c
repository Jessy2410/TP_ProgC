// pyramide.c

#include <stdio.h>

int main() {
    int n = 5; // hauteur de la pyramide
    int i, j;

    printf("Pyramide de hauteur %d :\n\n", n);

    for (i = 1; i <= n; i++) {
        // Espaces pour centrer la ligne
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Nouvelle ligne après chaque étage de la pyramide
        printf("\n");
    }

    printf("\nGénération de la pyramide terminée.\n");

    return 0;
}

