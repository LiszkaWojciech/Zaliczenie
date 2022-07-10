#pragma once
#include <string>
#include <iostream>

using namespace std;

class Samochod
{
private:
	int liczba_drzwi=4;
	double cena;
	string imie="";
	string nazwisko="";
public:
	Samochod();
	Samochod(string imie, string nazwisko, double cena);
	Samochod(double c);
	~Samochod();
	int getDrzwi();
	void setDrzwi(int l);
	double getCena();
	void setCena(double c);
	void zmien_imie_nazwisko(string i, string n);
	double podatek(double c, double p);
	friend ostream& operator<<(ostream& wy, Samochod s);
	bool operator++();
	
};

