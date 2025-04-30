#include <stdio.h>

int main() {
    int a, b;
    int resultat = 1;

    printf("Entrez la base a : ");
    scanf("%d", &a);
    printf("Entrez l'exposant b : ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        resultat *= a;
    }
    printf("%d élevé à la puissance %d est égal à %d\n", a, b, resultat);

    return 0;
}
