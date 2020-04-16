#pragma once
#include "Equipment.h"
#include <iostream>

class Printer : public Equipment
{
private:
	double cartridgePrice;
public:
	Printer(unsigned serialNumber, double price, double cartridgePrice) : Equipment(serialNumber, price), cartridgePrice(cartridgePrice) {}
	void Print();
	double getCartridgePrice() { return cartridgePrice; }
};

