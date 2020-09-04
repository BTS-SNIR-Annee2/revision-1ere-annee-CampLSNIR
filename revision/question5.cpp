


#include<iostream>
#include<string>

int main() {

	int prix;
	std::cout << "Entrer le prix hors taxe\n";
	std::cin >> prix;

	std::cout << "Prix hors taxe : " << prix << "\nTVA : 20%\n" << "Prix : " << prix*1.2;

	return 0;

}