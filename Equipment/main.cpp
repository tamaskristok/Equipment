#include "Equipment.h"
#include "Monitor.h"
#include "Printer.h"
#include <iostream>

int loadMaxEquipment() {
	std::cout << "Hany darabot kell felvenni: ";
	int x;
	std::cin >> x;
	if (x < 0) {
		x = 0;
	}
	return x;
}







int main() {

	unsigned const maxEquipment = loadMaxEquipment();
	Equipment** equipment;
	equipment = new Equipment*[maxEquipment];

	//Monitor mt(123, 10.22, 6);
	//Printer pt(123, 23.1, 21.1);
	//equipment[0] = { &mt };
	//equipment[1] = { &pt };

	std::cout << "Monitor or printer (m/p)";

	int number = maxEquipment;
	for (int i = 0; i < maxEquipment; i++)
	{
		char mORp;
		std::cin >> mORp;
		
		if (mORp == 'm') {
			
			std::cout << "Serialnumber: ";

			std::cout << "Price: ";

			std::cout << "Age: ";

		}
		else if (mORp == 'p') {
			std::cout << "Serialnumber: ";

			std::cout << "Price: ";

			std::cout << "CartridgePrice: ";
		
		}
		else
		{
			break;
		}

	}





	for (int i = 0; i < maxEquipment; i++)
	{
		equipment[i]->Print();
		std::cout << std::endl;
	}





	delete[] equipment;

	getchar();
	return 0;
}