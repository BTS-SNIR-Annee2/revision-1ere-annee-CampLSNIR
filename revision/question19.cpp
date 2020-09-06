
#include<iostream>
int main() {

	int pos1 = 0;
	int pos2 = 0;

	int tab1[] = { 12 , 13 , 14 , 15 , 16 , 17 , 18 };

	int tab2[] = { 9 , 10 , 11 , 15 , 16 , 17 , 18 };

	int tab3[14] = {};

	for (size_t i = 0; i < 14; i++)
	{

		if ((pos1 < 7 and tab1[pos1] <= tab2[pos2]) or pos2 == 7) {

			tab3[i] = tab1[pos1];
			pos1++;

		}
		else if ((pos2 < 7 and tab2[pos2] <= tab1[pos1] ) or pos1 == 7) {

			tab3[i] = tab2[pos2];
			pos2++;
		}

		std::cout << " | " << tab3[i];
	}

	std::cout << " | ";
}

// chaud 