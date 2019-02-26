#include "Zelazko.h"
#include <iostream>

Zelazko::Zelazko(float cenaArg, const std::string& nazwaArg):
    m_cena(cenaArg), m_temperatura(0), m_nazwa(nazwaArg) {}


void Zelazko::UstawTemperature(int temp)
    { m_temperatura = temp; }


void Zelazko::WypiszWlasciwosci() const{
    using namespace std;
    cout << "Zelazko " << m_nazwa << " cena: " << m_cena 
    << ". temperatura: " << m_temperatura << endl;
}


int Zelazko::Get_temp() const
    { return m_temperatura; }
