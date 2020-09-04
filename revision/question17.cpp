
#include<iostream>

int main() {

	int notes[10] = {};

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "note de eleve" << i+1 << ": ";
		std::cin >> notes[i];
	}

	float moy = 0;

	for (size_t i = 0; i < 10; i++)
	{
		moy = moy + notes[i];
	}
	moy = moy / 10;

	int nbmoy = 0;

	for (size_t i = 0; i < 10; i++)
	{
		if (notes[i] > moy) {
			nbmoy++;
		}
	}

	std::cout << "le nombre de ces notes superieures a la moyenne est de " << nbmoy;

}