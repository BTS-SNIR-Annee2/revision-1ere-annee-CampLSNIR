

#include<iostream>
#include<string>

int main() {

	int nbre;
	std::cout << "Entrer un nombre\n";
	std::cin >> nbre;

	if (nbre > 0) {
		std::cout << nbre << " est positif \n";
	}else {
		std::cout << nbre << " est negatif \n";
	}

	return 0;

}