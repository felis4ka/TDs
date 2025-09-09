#include <stdio.h>
#include <string.h>

int main(void) {
    char mot[100], vue[100], c;
    int i, err = 0, trouve;

    printf("Mot secret : ");
    scanf_s("%99s", mot, sizeof mot);   // taille requise

    for (i = 0; mot[i]; i++)
        vue[i] = ((mot[i] >= 'A' && mot[i] <= 'Z') || (mot[i] >= 'a' && mot[i] <= 'z')) ? '_' : mot[i];
    vue[i] = '\0';

    while (err < 10 && strcmp(mot, vue) != 0) {
        printf("\nMot : %s  | Erreurs : %d/10\nLettre ? ", vue, err);
        scanf_s(" %c", &c, sizeof c);   // taille requise (==1)

        trouve = 0;
        for (i = 0; mot[i]; i++)
            if (mot[i] == c && vue[i] == '_') { vue[i] = c; trouve = 1; }
        if (!trouve) err++;
    }

    printf(strcmp(mot, vue) == 0 ? "\nBravo ! %s\n" : "\nPerdu... Le mot était : %s\n", mot);
    return 0;
}
