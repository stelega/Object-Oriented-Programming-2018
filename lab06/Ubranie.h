#pragma once
#include "Zelazko.h"
#include <string>


// Klasa bazowa dla roznych rodzajow ubran.
class Ubranie{

public:
    //Konstruktor przyjmujacy cene oraz nazwe ubrania
    Ubranie(float cenaArg, const std::string& nazwaArg);

    //Metoda wypisujaca wlasciwosci ubrania
    void WypiszWlasciwosci() const;
    
    //Metoda zmieniajaca wartosc zmiennej wyprasowanie na true, przyjmuje stala referencje do obiektu
    //klasy Zelazko
    void Prasuj(const Zelazko& zelazko);
    
    //Metoda zmienajaca wartosc zmiennej wyprasowanie na false
    void Pogniec();

protected:
    float m_cena;
    bool m_wyprasowanie = false;
    const std::string m_nazwa;

    //Metoda pomocnicza uzywana przez metode WypiszWlasciwosci i przez klasy pochodne
    void Wypisz() const;
    
};
