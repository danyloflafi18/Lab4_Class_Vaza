#pragma once
#include <string>
using namespace std;

class Vaza {
private:
	int volumeOfWater;
	int theWeightOfTheVase;
	string theTypeOfMaterial;

protected:
	int quantitySold;
	int theNumberOfBroken;

public:
	double number;
	string owner;

	Vaza();

	Vaza(int volumeOfWater,
	     int theWeightOfTheVase,
	     string theTypeOfMaterial,
		
		 int quantitySold,
	     int theNumberOfBroken ,
		
		 double number,
	     string owner);
	int getVolumeOfWater();
	int getTheWeightOfTheVase();
	string getTheTypeOfMaterial();
	int getQuantitySold();
	int getTheNumberOfBroken();
	string getOwner();
	int getNumber();

	~Vaza();
};
