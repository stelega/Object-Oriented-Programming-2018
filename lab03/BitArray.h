#pragma once

class Bit;

class BitArray{

public:
    // konstruktor tworzacy dynamicznie tablice przechowujaca bity w ilosci size
    // ustawiajacy wszystkie bity na wartosc value
    BitArray(int size, bool value=false);
    // destruktor zwalniajacy wczesniej zaalokowana pamiec
    ~BitArray();

    // metoda wypisujaca wszystkie bity od tylu
    void print() const;

    // operator zwracajacy obiekt przechowujacy informacje o dostepie do bitu na pozycji index
    Bit operator[](int index) const;

private:
    int m_size;
    unsigned char* m_arr;

};



class Bit{

public:
    // konstruktor tworzacy obiekt przechowujacy dostep do bitu z tablicy arr na pozycji index
    Bit(unsigned char* arr, int index);
    
    // przeladowanie operatora "=" ustawiajacego wartosc value na odpowiedni bit tablicy bitow
    Bit& operator=(bool value);
    // operator rzutujacy obiekt na wartosc bitu o ktorym informacje przechowuje
    operator bool() const;

private:     
    unsigned char* m_arr;
    int m_index;

};
