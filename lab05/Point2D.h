#pragma once
#include <iostream>

class Point2DAverage;

class Point2D{

friend class Point2DAverage;

public:
    // konstruktor przyjmujacy 2 double i przypisujacy je do zmiennych m_x i m_y
    Point2D(double x=0, double y=0);

    // getery zmiennych m_x i m_y
    double Get_x() const;
    double Get_y() const;

    // przeladowanie operatora predekrementracji
    Point2D& operator--();
    // przeladowanie operatora postinkrementracji 
    Point2D operator++(int i);
    // przeladowanie operatora + zwracajaca nowy obiekt, ktorego wspolrzedne przyjmuja wartość
    // sumy wspolrzednych obieku na ktorym wywolywana jest metoda i obiektu przyjmowanego jako argument metody
    Point2D operator+(const Point2D& point) const;

private:
    double m_x;
    double m_y;

};


// globalne przeladowanie operatora + przyjmujace obiekt Point2D i double.
// Dodaje value zarowno do m_x jak i m_y
Point2D operator+( double value, const Point2D& point);
// przeladowanie operatora <<. zwraca strumien z danymi z obietu typu point
std::ostream& operator<<( std::ostream& o, const Point2D& point );
