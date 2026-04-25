#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Comp
{
	string name;
	double chastota;
	int ram;
	bool DvdRom;
	double price;

public:
	Comp();
	Comp(string name, double chastota, int ram, bool DvdRom, double price);
	
	void setName(string name);
	string getName() const;

	void setChastota(double chastota);
	double getChastota() const;

	void setRam(int ram);
	int getRam() const;

	void setDvdRom(bool DvdRom);
	bool getDvdRom() const;

	void setPrice(double price);
	double getPrice() const;

	void print() const;
};

