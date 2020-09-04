

#include<iostream>
#include<string>

int main() {

	int num = 0;

	while (num <= 10 or num >= 20) {

		std::cout << "Entrer un nombre\n";

		std::cin >> num;

		if (num >= 20) {
			std::cout << "Plus petit !\n";
		}else if(num <= 10){
			std::cout << "Plus grand !\n";
		}
	}
	

	return 0;
};