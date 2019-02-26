#include "MyMakefileWorkHere.hxx"
#include <iostream>
#include <cmath>


Rational::Rational(int licznik, int mianownik): m_licznik(licznik), m_mianownik(mianownik)
    { skracacz(); }


Rational::operator float() const
    { return static_cast<float>(m_licznik) / static_cast<float>(m_mianownik); }


void Rational::skracacz(){
    int a = m_licznik;
    int b = m_mianownik;
    while(a != b){
        if(a>b) a-= b;
        else b-=a;
    }
    m_licznik = m_licznik/a;
    m_mianownik = m_mianownik/a;
}


void Rational::Print() const{
    if(m_mianownik == 1) std::cout << m_licznik << std::endl;
    else std::cout << m_licznik << "/" << m_mianownik << std::endl;
}
