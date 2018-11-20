#include<iostream>
#include<string>
#include"Header.h"
using namespace std;
Vaza::Vaza(int Vol, int Weig, string Mat)
{
	Volume = Vol;
	Weight = Weig;
	Material = Mat;
}
void Vaza::getInfo()
{
	cout << "Volume";
	cin >> Volume;
	cout << "Weight";
	cin >> Weight;
	cout << "Material";
	cin >> Material;
	cout << endl;
	cout << "Volume " << Volume << endl;
	cout << "Weight " << Weight << endl;
	cout << "Material " << Material << endl;
}
Vaza::Vaza()
{
}
Vaza::~Vaza()
{
}

