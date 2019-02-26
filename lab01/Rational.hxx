#pragma once

class Fun;

class Rational{
friend class Fun;
public:


    // konstruktor kopiujacy zmianna licznik do skladowej klasy m_licznik
    // i zmianna mianownik do skladowej klasy m_mianownik
    Rational(int licznik, int mianownik = 1);
    // funkcja konwertujaca obiekt klasy Rational na zmienna typu float
    operator float() const;
    // funckja wypisujaca liczbe zapisana w obiekcie
    void Print() const;
    // funkcja skracajaca ulamek
    
private:
    void skracacz();
    
    int m_licznik;
    int m_mianownik;

};
