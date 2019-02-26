#pragma once

#include <string>

class Zelazko{
public:
    // Konstruktor przyjmujacy cene oraz nazwe zelzka
    Zelazko(float cenaArg, const std::string& nazwaArg);

    // metoda ustawiajaca temperature zelazka
    void UstawTemperature(int temp);
    // metoda wypisujaca wlasciwosci zelazka
    void WypiszWlasciwosci() const;
    // metoda zwracajaca temperature zelzka
    int Get_temp() const;

protected:
    float m_cena;
    int m_temperatura;
    const std::string m_nazwa;
};

class ZelazkoZelmer: public Zelazko{
public:
    ZelazkoZelmer(int cenaArg): Zelazko(cenaArg, "Zelmer") {}

};

class ZelazkoTefal: public Zelazko{
public:
    ZelazkoTefal(int cenaArg): Zelazko(cenaArg, "Tefal") {}

};
