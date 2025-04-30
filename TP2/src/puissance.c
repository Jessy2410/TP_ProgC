#include <stdio.h>

int main() {
    int a = 2;  // base
    int b = 3;  // exposant
    int resultat = 1;

    // Boucle pour calculer a^b
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d est égal à %d\n", a, b, resultat);

    return 0;
}
