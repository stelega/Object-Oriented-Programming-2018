#pragma once

class Complex;

class Rational{
    friend class Complex;

public:

    // Konstruktor kopiujacy ustawiajacy licznik i mianownik ulamka
    Rational(int licznik, int mianownik);

    // funkcja wypisujaca ulamek zwykly
    void Print() const;

private:
    int m_licznik;
    int m_mianownik;

};
