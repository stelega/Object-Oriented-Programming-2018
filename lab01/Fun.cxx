#include "Fun.hxx"
#include <iostream>
#include <cmath>


float Fun::suma = 0;
int Fun::counter = 0;

Rational Fun::Add(const Rational &x, const Rational &y){
    int licznik = y.m_mianownik * x.m_licznik + x.m_mianownik * y.m_licznik;
    int mianownik = x.m_mianownik * y.m_mianownik;
    Rational temp(licznik, mianownik);
    return temp;
}


Rational Fun::Multiply(const Rational &x, const Rational &y){
    Rational temp(x.m_licznik * y.m_licznik, x.m_mianownik * y.m_mianownik);
    return temp;
}


Rational Fun::Divide(const Rational &x, const Rational &y){
    Rational temp(x.m_licznik * y.m_mianownik, x.m_mianownik * y.m_licznik);
    return temp;
}


void Fun::Average(const Rational &x){
    suma += static_cast<float>(x.m_licznik)/static_cast<float>(x.m_mianownik);
    counter++;
}


double Fun::Average()
    { return suma/counter; }
    