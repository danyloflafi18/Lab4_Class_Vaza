#include "Vaza.h"
#include <iostream>
using namespace std;

Vaza::Vaza()
{
}

Vaza::Vaza(int volumeOfWater,
	int theWeightOfTheVase,
	string theTypeOfMaterial,
	int quantitySold,
	int theNumberOfBroken,
	double number,
	string owner) :

	volumeOfWater(volumeOfWater),
    theWeightOfTheVase(theWeightOfTheVase),
    theTypeOfMaterial(theTypeOfMaterial),
    quantitySold(quantitySold),
    theNumberOfBroken(theNumberOfBroken),
    number(number),
    owner(owner)
	
{

}

int Vaza::getVolumeOfWater()
{
	return volumeOfWater;
}

int Vaza::getTheWeightOfTheVase()
{
	return theWeightOfTheVase;
}

string Vaza::getTheTypeOfMaterial() 
{
	return theTypeOfMaterial;
}

int Vaza::getQuantitySold()
{
	return quantitySold;
}

int Vaza::getTheNumberOfBroken()
{
	return theNumberOfBroken;
}

string Vaza::getOwner()
{
	return owner; 
}

int Vaza::getNumber()
{
	return number;
}

Vaza::~Vaza()
{
}
