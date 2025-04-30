#include <stdio.h>
#include <string.h>

#define NB_ETUDIANTS 5
#define TAILLE_MAX 100

struct Etudiant {
    char nom[TAILLE_MAX];
    char prenom[TAILLE_MAX];
    char adresse[TAILLE_MAX];
    float note_prog;
    float note_sys;
};

int main() {
    struct Etudiant etudiants[NB_ETUDIANTS];

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Étudiant.e %d :\n", i + 1);

        printf("  Nom : ");
        fgets(etudiants[i].nom, TAILLE_MAX, stdin);

        printf("  Prénom : ");
        fgets(etudiants[i].prenom, TAILLE_MAX, stdin);

        printf("  Adresse : ");
        fgets(etudiants[i].adresse, TAILLE_MAX, stdin);

        printf("  Note en Programmation C : ");
        scanf("%f", &etudiants[i].note_prog);

        printf("  Note en Système d'exploitation : ");
        scanf("%f", &etudiants[i].note_sys);

        getchar(); 
        printf("\n");
    }

    printf("\n--- Informations des étudiant.e.s ---\n");
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom     : %s", etudiants[i].nom);
        printf("Prénom  : %s", etudiants[i].prenom);
        printf("Adresse : %s", etudiants[i].adresse);
        printf("Note 1 (C)  : %.2f\n", etudiants[i].note_prog);
        printf("Note 2 (SE) : %.2f\n", etudiants[i].note_sys);
        printf("\n");
    }

    return 0;
}
