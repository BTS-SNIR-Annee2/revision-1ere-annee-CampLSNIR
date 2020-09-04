
#include<iostream>

int main() {

	int tab1[8] = { 4 , 8 , 7 , 9 , 1 , 5 , 4 , 6 };
	int tab2[8] = { 7 , 6 , 5 , 2 , 1 , 3 , 7, 4 };

	for (size_t i = 0; i < 8; i++)
	{
		tab1[i] = tab1[i] + tab2[i];
		std::cout << " | " << tab1[i];
	}

	std::cout << " |";


}