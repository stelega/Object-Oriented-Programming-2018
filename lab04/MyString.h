#pragma once
#include <iostream>

class MyString;

// funkcja globalna powielajaca lancuch znakow w obiekcie "x" mnoznik razy 
MyString operator*(int mnoznik, const MyString& x);
// funkcja globalna przeladowujaca operator "<<"
std::ostream& operator<<(std::ostream& o, const MyString& x);


class MyString{

    friend std::ostream& operator<<(std::ostream& o, const MyString& x);

public:
    // konstruktor przyjmujacy lancuch znakow, alokujacy pamiec na odpowiednia dlugosc
    // i kopiujacy ten lancuch do zmiennej m_arr
    MyString(const char* napis);
    // konstruktor przyjmujacy pojedynczy znak, alokujacy pamiec na 2 chary
    // i kopiujacy ten znak (wraz ze znakiem konca linii) do zmiennej m_arr
    MyString(char c);
    // destrutor zwalniajacy pamiec
    ~MyString();

    // metoda wypisujaca lancuch znajdujacy sie w zmiennej m_arr
    void Print() const;

    // przeladowanie operatora "==". Sprawdza czy lancuchy w obiektach sa takie same
    bool operator==(const MyString& x) const;
    // przeladowanie operatora "[]". Wyciaga znak o indeksie "index" z lancucha m_arr
    char& operator[](int index) const;
    // przeladowanie operatora "+". Dodaje 2 lancuchy do stworzonej w metodzie zmiennej
    MyString operator+(const MyString& x) const;
    // przeladowanie operatora "*". Mnozy 2 lancuchy 
    MyString operator*(int mnoznik) const;
    // przeladowanie operatora "=". Przypisuje lancuch z obiektu x do lancucha
    //  w obiekcie na ktorym wywolywana jest metoda
    MyString& operator=(const MyString& x);

private:
    // wskaznik pokazujacy na lancuch znakow
    char* m_arr;

};
