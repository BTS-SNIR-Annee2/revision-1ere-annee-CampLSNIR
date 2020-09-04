

#include<iostream>
#include<string>

int main() {

	int num = 0;

	std::cout << "Entrer un nombre\n";

	std::cin >> num;

	for (int i = num + 1; i < num + 10 + 1; i++)
	{
		std::cout << i << "\n";
	}


	return 0;
};