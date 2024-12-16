#include <iostream>

#include "CarFactory.h"
#include "CarProduct.h"

int main()
{
	CarFactory* pFac = new CarAudiFactory();
	CarProduct* pCar = pFac->CreateCar();

	std::cout << pCar->CarName();

	delete pFac; pFac = nullptr;
	delete pCar; pCar = nullptr;
}