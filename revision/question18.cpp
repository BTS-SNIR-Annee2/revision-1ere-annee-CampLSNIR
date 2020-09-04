
#include<iostream>
int main() {

	int tab[10];

	bool suite = true;



	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "Entrer un nombre";
		std::cin >> tab[i];

		if (i > 0) {
			if (tab[i - 1] > tab[i]) {
				suite = false;
			}
		}
		
	}

	//std::cout << "Entrer un nombre"; --PAS FINI ...
}