#include "Monitor.h"

void Monitor::Print()
{
	std::cout << "S/N:" << getSerialNumber() << " Price:" << getPrice();
	std::cout << " Age:" << age;
}
