#pragma once
#include<iostream>
#include<string>
using namespace std;
class Vaza {

private:
	int Volume;
	int Weight;
	string Material;

public: 
	Vaza();
	Vaza(int Vol, int Weig, string Mat);
    
	int height;
	string name;
	
	void getInfo();

	~Vaza(); 
protected:
	int price;
	int number;
};

