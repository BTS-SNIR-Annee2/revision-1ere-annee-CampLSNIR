
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
		std::cout << "les �l�ments sont tous cons�cutifs\n";
	}else {
		std::cout << "les �l�ments ne sont pas cons�cutifs\n";
	}
	
}