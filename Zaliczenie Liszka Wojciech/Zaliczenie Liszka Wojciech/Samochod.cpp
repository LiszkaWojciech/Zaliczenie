#include "Samochod.h"

Samochod::Samochod()
{
}

Samochod::Samochod(string i, string n, double c)
{
	imie = i;
	nazwisko = n;
	cena = c;
	liczba_drzwi = 4;
}

Samochod::Samochod(double c)
{
	liczba_drzwi = 4;
	cena = c;
	imie = "";
	nazwisko = "";

}

Samochod::~Samochod()
{
}

int Samochod::getDrzwi()
{
	return liczba_drzwi;
}

void Samochod::setDrzwi(int l)
{
	liczba_drzwi = l;
}

double Samochod::getCena()
{
	return cena;
}

void Samochod::setCena(double c)
{
	cena = c;
}

void Samochod::zmien_imie_nazwisko(string i, string n)
{
	imie = i;
	nazwisko = n;

}

double Samochod::podatek(double c, double p)
{
	double res = c * p;
	return res;
}

bool Samochod::operator++()
{
	
	double cena = this->getCena();
	cena += 1000;
    this->setCena(cena);
	return true;
    
}



ostream& operator<<(ostream& wy, Samochod s)
{
	wy << s.imie << endl;
	wy << s.nazwisko << endl;
	wy << s.cena << endl;
	wy << s.liczba_drzwi << endl;
	return wy;
}
