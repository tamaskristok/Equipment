#pragma once
#include <iostream>

class Equipment {
private:
	unsigned int serialNumber;
	double price;
public:
	virtual void Print() = 0; /*Enélkül õsosztály fog érvényesülni*/
	unsigned getSerialNumber() { return serialNumber; }
	double getPrice() { return price; }
	Equipment(unsigned serialNumber, double price) : serialNumber(serialNumber), price(price) {}
};