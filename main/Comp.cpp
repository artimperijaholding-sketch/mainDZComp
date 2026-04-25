#include "Comp.h"

Comp::Comp()
{
    name = "No name";
	chastota = 0;
	ram = 0;
	DvdRom = false;
    price = 0;
}

Comp::Comp(string name, double chastota, int ram, bool DvdRom, double price)
{
    this->name = name;
    this->chastota = chastota;
    this->ram = ram;
    this->DvdRom = DvdRom;
	this->price = price;
}

void Comp::setName(string name)
{
	this->name = name;
}

string Comp::getName() const
{
    return name;
}

void Comp::setChastota(double chastota)
{
    	this->chastota = chastota;
}

double Comp::getChastota() const
{
    return chastota;
}

void Comp::setRam(int ram)
{
    this->ram = ram;
}

int Comp::getRam() const
{
    return ram;
}

void Comp::setDvdRom(bool DvdRom)
{
    this->DvdRom = DvdRom;
}

bool Comp::getDvdRom() const
{
    return DvdRom;
}

void Comp::setPrice(double price)
{
	this->price = price;
}

double Comp::getPrice() const
{
    return price;
}

void Comp::print() const
{
	cout << "---------------------------- " << endl;
    cout << "Name: " << name << endl;
    cout << "Chastota: " << chastota << " GHz" << endl;
    cout << "RAM: " << ram << " GB" << endl;
    cout << "DVD-ROM: " << (DvdRom ? "Yes" : "No") << endl;
	cout << "Price: $" << price << endl;
    cout << "---------------------------- " << endl;
}
