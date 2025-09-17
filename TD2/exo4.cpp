#include <iostream>
using namespace std;

int main() {
	cout << "Donnez deux nombre, nous vous afficherons leur somme, produit, différence, quotient" << endl;

	int a;
	int b;

	cout << "Entrez la valeur de a" << endl;
	cin >> a;

	cout << "Entrez la valeur de b" << endl;
	cin >> b;

	int somme = a + b;
	int difference = a - b;
	int produit = a * b; 
	int quotient = a / b;

	cout << "Voici le résultat :" << endl;
	cout << "Somme = " << somme << endl;
	cout << "Différence = " << difference << endl;
	cout << "Produit = " << produit << endl;
	cout << "Quotient = " << quotient << endl;

	return 0;

}