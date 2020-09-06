
#include<iostream>
int main() {

	int tab[10];

	bool suite = true;

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "Entrer le nombre n " << i << " : ";
		std::cin >> tab[i];
		std::cout << "\n";

		if (i > 0) {
			if (tab[i - 1] + 1 != tab[i]) {
				suite = false;
			}
		}
	}

	if (suite) {
		std::cout << "les éléments sont tous consécutifs\n";
	}else {
		std::cout << "les éléments ne sont pas consécutifs\n";
	}
	
}