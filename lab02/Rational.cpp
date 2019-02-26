#include <iostream>
#include "Rational.h"
#include "Complex.h"


Rational::Rational(int licznik, int mianownik): m_licznik(licznik), m_mianownik(mianownik) {}


void Rational::Print() const
    { std::cout << m_licznik << "/" << m_mianownik << std::endl; }
