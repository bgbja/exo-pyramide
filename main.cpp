#include <iostream>

int main() {

	std::string symbole = "#";
	int etage;
	
	std::cout << "entre le nombre de ligne que tu veux pour la pyramide: ";
	std::cin >> etage;

	if (etage == 1) {

		std::cout << " " << symbole << " ";

		return 0;

	}

	else {

		int etage1 = etage - 1;
		int i = 0;
		int symbole1 = 1;
		
		std::cout << std::string(etage1, ' ') << symbole << std::endl;
		
		while (i < etage-1) {

			etage1--;
			symbole1 = symbole1 + 2;
			
			std::cout << std::string(etage1, ' '); 
			std::cout << std::string(symbole1, '#') << std::endl;
	
			i++;
		
		}
		
		return 0;
	}
	
	return 0;
}
