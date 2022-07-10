// Zaliczenie Liszka Wojciech.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <time.h>

#include "Samochod.h"



int main()
{
    srand(time(NULL));
    Samochod s1, s2(20000.00), s3("Wojciech", "Liszka", 30000.00);
    s3.setDrzwi(4);
    cout << "liczba drzwi dla s3 " << s3.getDrzwi()<<endl;
    cout << "cena samochodu " << s3.getCena() << endl;
    s3.setCena(24000.00);
    cout << "podatek s3 " << s3.podatek(s3.getCena(), 0.04) << endl;
    s1.setCena(3000.00);
    cout << "podatek s1 " << s1.podatek(s1.getCena(), 0.05) << endl;
    cout << "podatek s2 " << s2.podatek(s2.getCena(), 0.10) << endl;
    s1.zmien_imie_nazwisko("Stefan", "Kowalski");
    cout << s3;
    ++s3;
    cout << "cena samochodu " << s3.getCena() << endl;

    vector<Samochod> lista;

    for (int i = 0; i < 10; i++)
    {
        Samochod st(rand() % 100000);
        lista.push_back(st);

    }

    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i];
    }
}


