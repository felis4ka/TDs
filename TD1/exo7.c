#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void) {
    int n, i, j, tmp;
    int tab[MAX];

    printf("Donner la taille du tableau (max %d) : ", MAX);
    scanf("%d", &n);

    srand((unsigned)time(NULL)); // initialisation aléatoire

    // Remplissage aléatoire
    for (i = 0; i < n; i++) {
        tab[i] = rand() % 100; // valeurs entre 0 et 99
    }

    // Tri (méthode simple : tri à bulles)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    // Affichage
    printf("Tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
