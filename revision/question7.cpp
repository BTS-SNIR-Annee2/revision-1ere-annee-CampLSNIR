#include<iostream>
#include<string>

int main() {

	int nbre1;
	std::cout << "Entrer un nombre\n";
	std::cin >> nbre1;

	int nbre2;
	std::cout << "Entrer un deuxieme nombre\n";
	std::cin >> nbre2;

	if (nbre1 < 0 or nbre2 < 0) {
		std::cout << "le produit de " << nbre1 << " et " << nbre2 << " est negatif \n";
	}
	else {
		std::cout << "le produit de " << nbre1 << " et " << nbre2 << " est positif \n";
	}

	return 0;

}