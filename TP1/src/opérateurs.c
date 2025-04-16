// operateurs.c

#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;

    // Opérateurs de comparaison
    int est_egal = (a == b);
    int est_superieur = (a > b);

    // Affichage des résultats
    printf("Addition : %d + %d = %d\n", a, b, addition);
    printf("Soustraction : %d - %d = %d\n", a, b, soustraction);
    printf("Multiplication : %d * %d = %d\n", a, b, multiplication);
    printf("Division : %d / %d = %d\n", a, b, division);
    printf("Modulo : %d %% %d = %d\n", a, b, modulo);

    printf("a == b : %d\n", est_egal);        // 0 = faux, 1 = vrai
    printf("a > b : %d\n", est_superieur);    // 0 = faux, 1 = vrai

    return 0;
}
