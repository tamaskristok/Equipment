#include "Equipment.h"
#include "Monitor.h"
#include "Printer.h"
#include <iostream>
#include <vector>
int loadMaxEquipment() {
	std::cout << "Hany darabot kell felvenni: ";
	int x;
	std::cin >> x;
	if (x < 0) {
		x = 0;
	}
	return x;
}
/*Amennyiben az ősosztály nem vírtuális a saját Print-je hívódik meg.*/
/* most sima virtuallal is jó */
/*akkor maradjon így */
/* következő feladat ! */

/*ez felraknád?
ha hozzáadsz mint contributor akkor igen :D 

*/
/**/
int main() {

	unsigned serialnumber;
	double price;
	int age;
	double cartridgeprice;
	unsigned const maxEquipment = loadMaxEquipment();
	std::vector<Equipment*> equipments;  
	
	for (int i = 0; i < maxEquipment; i++)
	{
			std::cout << "Monitor or printer (m/p)";
		char mORp;
		std::cin >> mORp;
	
		if (mORp == 'm') { 
			
			std::cout << "Serialnumber: ";
			std::cin >> serialnumber;
			std::cout << "Price: ";
			std::cin >> price;
			std::cout << "Age: ";
			std::cin >>  age;
			equipments.push_back(new Monitor(serialnumber, price, age));
		}
		else if (mORp == 'p') {

			std::cout << "Serialnumber: ";
			std::cin >>  serialnumber;
			std::cout << "Price: ";
			std::cin >>  price;
			std::cout << "CartridgePrice: ";
			std::cin >>  cartridgeprice;
			equipments.push_back(new Printer(serialnumber, price, cartridgeprice));		
		}
		else {
			break;
		}
	}
	for (int i = 0; i < maxEquipment; i++)
	{
		equipments[i]->Print(); 
		std::cout << std::endl;
	}
	
	return 0;
}

