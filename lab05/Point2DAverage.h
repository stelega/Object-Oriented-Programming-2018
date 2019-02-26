#pragma once
#include "Point2D.h"



class Point2DAverage{

public:

    // funkcja ustawiajaca na 0 wszystkie zmienne w obiekcie
    void reset();

    // getery zmiennych m_x, m_y (w obiekcie m_point) oraz m_size
    double Get_x() const;
    double Get_y() const;
    double Get_size() const;
    

    // funktor zwracajacy obiekt Point2D zawierajacy dane pozwalajacy na obliczenie sredniej
    // arytmetycznej wspolrzednych obiektu na ktorym wywolana jest metoda oraz obiektu przyjetego
    Point2D operator()(const Point2D& point );

private:
    Point2D m_point;
    int m_size = 0;
};

// przeladowanie operatora << zwracajacego strumien z danymi z obiektu point
std::ostream& operator<<( std::ostream& o, const Point2DAverage& point);
