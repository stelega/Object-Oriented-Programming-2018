#pragma once
#include "Rational.hxx"

class Fun{

public:

    // funkcja statyczna dodajaca dwie liczby (zapisane jako obiekty klasy Rational)
    static Rational Add(const Rational &x, const Rational &y);
    // funckja statyczna mnozaca dwie liczby (zapisane jako obiekty klasy Rational)
    static Rational Multiply(const Rational &x, const Rational &y);
    // funckja statyczna dzielaca dwie liczby  (zapisane jako obiekty klasy Rational)
    static Rational Divide(const Rational &x, const Rational &y);
    // funckja statyczna ktora sumuje ulamki i zlicza ilosc dodanych elementow
    static void Average(const Rational &x);
    // funkcja statyczna obliczajaca srednia
    static double Average();


public:
    static float suma;
    static int counter;
};
