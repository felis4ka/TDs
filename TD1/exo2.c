#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	printf("Entrez la valeur de a : \n");
	double a;
	scanf_s("%lf", &a);
	printf("Entrez la valeur de b : \n");
	double b;
	scanf_s("%lf", &b);
	printf("Entrez la valeur de c : \n");
	double c;
	scanf_s("%lf", &c);

	double delta; 
	delta = b * b - 4 * a * c;

	if (delta < 0) {
		printf("Pas de racines reelles trouvees");
		return EXIT_SUCCESS;
	}
	
	if (delta == 0) {
		float racine_0 = -b / (2 * a);
		printf("Voici l'unique solution de votre équation : %.2f \n", racine_0);
		return EXIT_SUCCESS;
	}

	else {
		float racine_1 = (- b + sqrt(delta)) / (2 * a);
		float racine_2 = (- b - sqrt(delta)) / (2 * a);
		printf("Voici les solutions de votre équation : %.2f et %.2f \n", racine_1, racine_2);
		
	}
	return EXIT_SUCCESS;
}