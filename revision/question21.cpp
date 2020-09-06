#include <iostream>



int main() {

	int tab[12][8] = {};

	int max;

	for (size_t i = 0; i < 12; i++)
	{
		for (size_t k = 0; k < 8; k++) {
			tab[i][k] = rand();

			if (i == 0 and k == 0) {
				max = tab[i][k];
			}else if(tab[i][k] > max){
				max = tab[i][k];
			}
		}
	}

	std::cout << "le max est " << max << "\n";

}