#include "Printer.h"

void Printer::Print()
{
	std::cout << "S/N:" << getSerialNumber() << " Price:" << getPrice();
	std::cout << " CartridgePrice:" << getCartridgePrice();
}
