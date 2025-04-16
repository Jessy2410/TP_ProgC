// binaire.c

#include <stdio.h>

void afficher_binaire(unsigned int nombre) {
    int i;
    int taille_bits = sizeof(unsigned int) * 8; // Généralement 32 bits

    int demarrage = 0; // Pour éviter d'afficher les 0 en début (sauf si c’est 0)

    for (i = taille_bits - 1; i >= 0; i--) {
        int bit = (nombre >> i) & 1;

        if (bit == 1) {
            demarrage = 1;
        }

        if (demarrage) {
            printf("%d", bit);
        }
    }

    // Si le nombre est 0
    if (!demarrage) {
        printf("0");
    }

    printf("\n");
}

int main() {
    unsigned int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        printf("Décimal : %u => Binaire : ", valeurs[i]);
        afficher_binaire(valeurs[i]);
    }

    return 0;
}
