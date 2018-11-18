#include "Bike.h"
#include <iostream>
using namespace std;

Bike::Bike()
{
}

Bike::Bike(int numberOfSpeeds, 
	int mass, 
	int maxMassOfPassenger, 
	string manufacturer, 
	double diameterOfWheel, 
	string owner, 
	int numberOfWheels, 
	int heightOfSeat):

	numberOfSpeeds(numberOfSpeeds),
	mass(mass),
	maxMassOfPassenger(maxMassOfPassenger),
	manufacturer(manufacturer),
	diameterOfWheel(diameterOfWheel),
	owner(owner),
	numberOfWheels(numberOfWheels),
	heightOfSeat(heightOfSeat)
{

}

int Bike::getNumberOfSpeeds() 
{
	return numberOfSpeeds;
}

int Bike::getMass() 
{
	return mass;
}

int Bike::getMaxMassOfPassenger() 
{
	return maxMassOfPassenger;
}

string Bike::getManufacturer() 
{
	return manufacturer;
}

int Bike::getNumberOfWheels() 
{
	return numberOfWheels;
}

int Bike::getHeightOfSeat() 
{
	return heightOfSeat;
}

Bike::~Bike()
{
}