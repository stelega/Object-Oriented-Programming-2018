#include "Point2DAverage.h"
#include "Point2D.h"


void Point2DAverage::reset(){
    m_point.m_x = 0;
    m_point.m_y = 0;
    m_size = 0;
}


double Point2DAverage::Get_x() const{
    return m_point.m_x;
}


double Point2DAverage::Get_y() const{
    return m_point.m_y;
}


double Point2DAverage::Get_size() const{
    return m_size;
}
    

Point2D Point2DAverage::operator()( const Point2D& point ){
    m_point.m_x += point.Get_x();
    m_point.m_y += point.Get_y();
    m_size++;
    return Point2D(m_point.m_x/m_size, m_point.m_y/m_size);
}



std::ostream& operator<<( std::ostream& o, const Point2DAverage& point){
    return o << "(" << point.Get_x() / point.Get_size() << "," << point.Get_y() / point.Get_size() << ")";
}
