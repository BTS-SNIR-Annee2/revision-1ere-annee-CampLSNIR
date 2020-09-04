

#include<iostream>
#include<string>

int main() {

	int age;
	std::cout << "Entrer l age de enfant\n";
	std::cin >> age;
	std::cout << "sa categorie est ";

	if (age < 6) {
		return 0;
	}else if (age <= 7) {
		std::cout << " Poussin";
	}else if ( age <= 9) {
		std::cout << " Pupille";
	}else if (age <= 11) {
		std::cout << " Minime";
	}else {
		std::cout << " Cadet";
	}

	return 0;

}