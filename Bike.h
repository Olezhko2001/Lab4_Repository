#pragma once
#include <string>
using namespace std;

class Bike {
private:
	int numberOfSpeeds;
	int mass;
	int maxMassOfPassenger;
	string manufacturer;

protected:
	int numberOfWheels;
	int heightOfSeat;

public:
	double diameterOfWheel;
	string owner;

	Bike();
	Bike(int numberOfSpeeds, 
		int mass, 
		int maxMassOfPassenger, 
		string manufacturer, 
		double diameterOfWheel, 
		string owner, 
		int numberOfWheels, 
		int heightOfSeat);
	int getNumberOfSpeeds();
	int getMass();
	int getMaxMassOfPassenger();
	string getManufacturer();
	int getNumberOfWheels();
	int getHeightOfSeat();
	~Bike();
};