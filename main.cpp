#include <iostream>
#include <string>
#include "Bike.h"
using namespace std;

void getAllInfoAboutBike(Bike bike);
void getBikeDiam(Bike bike);

int main()
{
	Bike bike1(15, 15, 100, "Ukraine", 40, "Vasyl", 2, 75);
	Bike bike2(20, 10, 100, "Yamaha", 30, "Oleh", 2, 75);
	Bike bike3(15, 7, 90, "Ocean", 27, "Julia", 2, 50);
	getAllInfoAboutBike(bike1);
	getAllInfoAboutBike(bike2);
	getAllInfoAboutBike(bike3);
}

void getAllInfoAboutBike(Bike bike)
{
	cout << "\nOwner: " << bike.owner;
	cout << "\nNumber of speeds: " << bike.getNumberOfSpeeds();
	cout << "\nMass of bike: " << bike.getMass();
	cout << "\nMaximum Mass of Rider: " << bike.getMaxMassOfPassenger();
	cout << "\nDiameter of Wheels: " << bike.diameterOfWheel;
	cout << "\nNumber of wheels: " << bike.getNumberOfWheels();
	cout << "\nManufacturer: " << bike.getManufacturer();
	cout << "\nHeight of the bike: " << bike.getHeightOfSeat() << endl;
}
