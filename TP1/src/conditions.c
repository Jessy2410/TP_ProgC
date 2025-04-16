// boucles.c - version avec for

#include <stdio.h>

int main() {
    int compteur = 5;

    if (compteur >= 10) {
        printf("La valeur du compteur doit être strictement inférieure à 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Condition d'affichage : première et dernière ligne -> *
            // les autres : * suivi de # jusqu'à l'avant-dernier caractère, puis *
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
