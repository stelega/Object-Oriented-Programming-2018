#pragma once
#include "Ubranie.h"
#include <string>
#include <iostream>

//Klasa pochodna klasy Ubranie
class Spodnie: public Ubranie{

public:
    //Konstruktor wywolujacy konstruktor klasy bazowej oraz ustawiajacy zmienna nogawki_stan klasy Spodnie
    Spodnie(float cenaArg, const std::string& nameArg): Ubranie(cenaArg, nameArg), nogawki_stan(false) {}

    //Metoda zmieniajaca wartosc zmiennej nogawki_stan na true i wypisujaca informacje o uzywanym zelazku
    //Przyjmuje stala referencje na obiekt klasy Zelazko
    void PrasujNogawki( const Zelazko& zelazko){
        std::cout << "Prasuje ' rekawy " << m_nazwa << "' zelazkiem o temp. " << zelazko.Get_temp() << "." << std::endl;
        nogawki_stan = true;
    }

    //Metoda wypisujaca wlasciwosci obiektu klasy Nogawki. Wykorzystuje metode Wypisz
    void WypiszWlasciwosci() const{
        Wypisz();
        std::cout << " Stan rekawow: " << (nogawki_stan ? "wyprasowane." : "pogniecione.") << std::endl;
    }

protected:
    bool nogawki_stan;

};


class SpodnieBawelniane : public Spodnie{

public:
    SpodnieBawelniane(float cenaArg): Spodnie(cenaArg, "Spodnie bawelniane"){}

};

class SpodnieJedwabne : public Spodnie{

public:
    SpodnieJedwabne(float cenaArg): Spodnie(cenaArg, "Spodnie jedwabne"){}

};
