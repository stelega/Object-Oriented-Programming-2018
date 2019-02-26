#pragma once
#include "Rational.h"


class Complex{

public:

    // konstruktor przyjmujacy 2 elementy przypisywane odpowiednio do czesci rzeczywistej i urojonej
    Complex(double re = 0, double im = 0);
    // konstruktor konwertujacy z obiektu typu Rational
    Complex( const Rational& x );

    // metoda wypisujaca liczbe zespolona w postaci algebraicznej
    void Print() const;
    // metoda wypisujaca czesc urojona
    double Im() const;

    // funkcja konwertujaca obiekt typu Complex na doubla
    explicit operator double() const;
    // przeladowanie operatora +. Dodaje dwie liczby zespolone
    Complex operator+(const Complex& x) const;
    // przeladowanie operatora -. Odejmuje dwie liczby zespolone
    Complex operator-() const;
    // przeladowanie operatora -. Zwraca odwrotnosc liczby zespolonej
    Complex operator-(const Complex& x) const;
    // przeladowanie operatora *. Mnozy dwie liczby zespolone
    Complex operator*(const Complex& x) const;

    // funkcja statyczna liczaca modul z liczby zespolonej
    static double Modulo( const Complex& x);

private:
    double m_re;
    double m_im;

};
