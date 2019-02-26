#include "Point2D.h"
#include <iostream>


Point2D::Point2D(double x, double y): m_x(x), m_y(y){}


double Point2D::Get_x() const
    { return m_x; }


double Point2D::Get_y() const
    { return m_y; }


Point2D& Point2D::operator--(){
    m_x--;
    m_y--;
    return *this;
}


Point2D Point2D::operator++(int i){
    Point2D tmp(m_x, m_y);
    m_x++;
    m_y++;
    return tmp;
}


Point2D Point2D::operator+(const Point2D& point) const
    { return Point2D ( m_x + point.m_x, m_y + point.m_y ); }



std::ostream& operator<<( std::ostream& o, const Point2D& point )
    { return o << "(" << point.Get_x() << "," << point.Get_y() << ")"; }


Point2D operator+( double value, const Point2D& point)
    { return Point2D( point.Get_x() + value, point.Get_y() + value ); }
