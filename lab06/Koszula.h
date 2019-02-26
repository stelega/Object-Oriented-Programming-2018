#pragma once
#include "Ubranie.h"
#include <string>
#include <iostream>

//Klasa pochodna klasy Ubranie
class Koszula: public Ubranie{

public:
    //Konstruktor wywolujacy konstruktor klasy bazowej oraz ustawiajacy zmienna rekawy_stan klasy Koszula
    Koszula(float cenaArg, const std::string& nameArg): Ubranie(cenaArg, nameArg), rekawy_stan(false) {}

    //Metoda zmieniajaca wartosc zmiennej rekawy_stan na true i wypisujaca informacje o uzywanym zelazku
    //Przyjmuje stala referencje na obiekt klasy Zelazko
    void PrasujRekawy( const Zelazko& zelazko){
        std::cout << "Prasuje ' rekawy " << m_nazwa << "' zelazkiem o temp. " << zelazko.Get_temp() << "." << std::endl;
        rekawy_stan = true;
    }

    //Metoda wypisujaca wlasciwosci obiektu klasy Koszula. Wykorzystuje metode Wypisz
    void WypiszWlasciwosci() const{
        Wypisz();
        std::cout << " Stan rekawow: " << (rekawy_stan ? "wyprasowane." : "pogniecione.") << std::endl;

    }

protected:
    bool rekawy_stan;

};


class KoszulaBawelniana : public Koszula{

public:
    KoszulaBawelniana(float cenaArg): Koszula(cenaArg, "Koszula bawelniana"){}

};

class KoszulaJedwabna : public Koszula{

public:
    KoszulaJedwabna(float cenaArg): Koszula(cenaArg, "Koszula jedwabna"){}

};
