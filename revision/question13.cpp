

#include<iostream>
#include<string>

int main() {

	int chevaux = 0;
	int chevauxJoue = 0;

	std::cout << "Entrer le nombre de chevaux\n";
	std::cin >> chevaux;

	std::cout << "Entrer le nombre de chevaux joue\n";
	std::cin >> chevauxJoue;

	float chance = (float)chevauxJoue / (float)chevaux;

	std::cout << "Chance = " << chance*100 << "%";


	return 0;
};