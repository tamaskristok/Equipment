#pragma once
#include <iostream>
#include "Equipment.h"

class Monitor : public Equipment {
private:
	unsigned int age;
public:
	Monitor(unsigned serialNumber, double price, unsigned age) : Equipment(serialNumber, price), age(age) {}
	void Print();
	unsigned getAge() { return age; }
};
