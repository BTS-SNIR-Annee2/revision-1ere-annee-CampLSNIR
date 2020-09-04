

#include<iostream>
#include<string>

int main() {

	int num = 0;
	int grand = 0;
	int pos = 0;

	//std::cin >> num;

	for (int i = 0; i < 20; i++)
	{
		std::cout << "Entrer un nombre n" << i+1 << "\n";
		std::cin >> num;

		if (i == 0) {
			grand = num;
			pos = i + 1;
		}else if (num > grand) {
			grand = num;
			pos = i+1;
		}
	}

	std::cout << "Le plus grand de ces nombres est le n" << pos << " le :" << grand;


	return 0;
};