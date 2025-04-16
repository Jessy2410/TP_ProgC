// calculs.c

#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Saisie des données
    printf("Entrez le premier entier (num1) : ");
    scanf("%d", &num1);

    printf("Entrez le deuxième entier (num2) : ");
    scanf("%d", &num2);

    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);  // Attention à l’espace avant %c pour ignorer les caractères résiduels

    // Traitement via switch
    switch (op) {
        case '+':
            printf("Résultat : %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Résultat : %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Résultat : %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Résultat : %d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Résultat : %d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;
        case '&':
            printf("Résultat : %d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("Résultat : %d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("Résultat : ~%d = %d\n", num1, ~num1);
            printf("Résultat : ~%d = %d\n", num2, ~num2);
            break;
        default:
            printf("Opérateur non reconnu.\n");
    }

    return 0;
}

