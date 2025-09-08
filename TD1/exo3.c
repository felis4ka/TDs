#include <stdio.h>
#include <stdlib.h>


char minuscule(char c){
	return tolower(c);

}
int main() {
	char c;
	printf("Entrez une lettre majuscule\n");
	scanf_s("%c", &c);
	printf("%c -> %c \n", c, minuscule(c));
	return EXIT_SUCCESS;
}