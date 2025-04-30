#include <stdio.h>

#define NB_ETUDIANTS 5
#define TAILLE_MAX 100

int main() {
    char noms[NB_ETUDIANTS][TAILLE_MAX];
    char prenoms[NB_ETUDIANTS][TAILLE_MAX];
    char adresses[NB_ETUDIANTS][TAILLE_MAX];
    float notes_prog[NB_ETUDIANTS];
    float notes_sys[NB_ETUDIANTS];

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Étudiant %d :\n", i + 1);

        printf("  Nom : ");
        fgets(noms[i], TAILLE_MAX, stdin);

        printf("  Prénom : ");
        fgets(prenoms[i], TAILLE_MAX, stdin);

        printf("  Adresse : ");
        fgets(adresses[i], TAILLE_MAX, stdin);

        printf("  Note en Programmation C : ");
        scanf("%f", &notes_prog[i]);

        printf("  Note en Système d'exploitation : ");
        scanf("%f", &notes_sys[i]);

        getchar();
    }

    printf("\n--- Liste des étudiant.e.s ---\n");
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("  Nom      : %s", noms[i]);
        printf("  Prénom   : %s", prenoms[i]);
        printf("  Adresse  : %s", adresses[i]);
        printf("  Note C   : %.2f\n", notes_prog[i]);
        printf("  Note SE  : %.2f\n", notes_sys[i]);
        printf("\n");
    }

    return 0;
}
