#include "Ubranie.h"
#include <iostream>


Ubranie::Ubranie(float cenaArg, const std::string& nazwaArg):
m_cena(cenaArg), m_nazwa(nazwaArg){}

void Ubranie::Wypisz() const{
    std::cout << m_nazwa << " - cena: " << m_cena << ". Stan ubrania: " 
        << (m_wyprasowanie ? "wyprasowane." : "pogniecione.");
}

void Ubranie::WypiszWlasciwosci() const{
    Wypisz();
    std::cout << std::endl;
}

void Ubranie::Prasuj(const Zelazko& zelazko){
    std::cout << "Prasuje '" << m_nazwa << "' zelazkiem o temp. " << zelazko.Get_temp() << "." << std::endl;
    m_wyprasowanie = true;
}

void Ubranie::Pogniec(){
    m_wyprasowanie = false;
}
