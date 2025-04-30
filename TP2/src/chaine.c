#include <stdio.h>

int longueur_chaine(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void copier_chaine(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 
}

void concatener_chaine(char dest[], char src[]) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
    char chaine1[100], chaine2[100], copie[100], concatenee[200];

    printf("Entrez la première chaîne : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    printf("Entrez la deuxième chaîne : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    int len1 = longueur_chaine(chaine1);
    if (chaine1[len1 - 1] == '\n') chaine1[len1 - 1] = '\0';

    int len2 = longueur_chaine(chaine2);
    if (chaine2[len2 - 1] == '\n') chaine2[len2 - 1] = '\0';

    printf("Longueur de la première chaîne : %d\n", longueur_chaine(chaine1));
    printf("Longueur de la deuxième chaîne : %d\n", longueur_chaine(chaine2));

    copier_chaine(chaine1, copie);
    printf("Copie de la première chaîne : %s\n", copie);

    copier_chaine(chaine1, concatenee);
    concatener_chaine(concatenee, chaine2);
    printf("Chaîne concaténée : %s\n", concatenee);

    return 0;
}
