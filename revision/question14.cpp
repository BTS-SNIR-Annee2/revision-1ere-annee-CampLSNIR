

#include<iostream>
#include<string>

int main() {

	std::string notes[9] = {};

	for (size_t i = 0; i < 9; i++)
	{
		std::cout << "Entrer une note \n";
		std::cin >> notes[i];
	}

	return 0;
};