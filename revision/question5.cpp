


#include<iostream>
#include<string>

int main() {

	int prix;
	std::cout << "Entrer le prix hors taxe\n";
	std::cin >> prix;

	int quantite;
	std::cout << "Entrer la quantite\n";
	std::cin >> quantite;

	float tva;
	std::cout << "Entrer la tva en %\n";
	std::cin >> tva;

	std::cout << "Prix hors taxe : " << prix << "\nTVA : "<< tva <<"\n" << "Prix : " << (prix*quantite)*(tva/100+1);

	return 0;

}