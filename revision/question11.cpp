

#include<iostream>
#include<string>

int main() {

	int num = 0;

	std::cout << "Entrer un nombre\n";

	std::cin >> num;

	int i = num + 1;

	while (i <num + 10 + 1) {
		std::cout << i << "\n";
		i++;
	}


	return 0;
};