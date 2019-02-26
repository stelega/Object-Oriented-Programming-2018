#include <iostream>
#include <cmath>
#include "Complex.h"


Complex::Complex(double re , double im ): m_re(re), m_im(im) {}


Complex::Complex( const Rational& x ):
    m_re (static_cast<double>(x.m_licznik) / static_cast<double>(x.m_mianownik)),
    m_im (0)
{}



void Complex::Print() const{
    if(m_im == 0)
        std::cout << m_re << std::endl;
    else if(m_im > 0)
        std::cout << m_re << "+" << m_im << "i" << std::endl;
    else 
        std::cout << m_re << m_im << "i" << std::endl;
}


double Complex::Im() const
    { return m_im; }



Complex::operator double() const
    { return m_re; }


Complex Complex::operator+(const Complex& x) const
    { return Complex ( m_re + x.m_re, m_im + x.m_im ); }


Complex Complex::operator-() const
    { return Complex ( -m_re,  -m_im); }


Complex Complex::operator-( const Complex& x ) const
    { return *this + (-x); }


Complex Complex::operator*(const Complex& x) const{
    double re = m_re * x.m_re - m_im * x.m_im;
    double im = m_re * x.m_im + m_im * x.m_re;
    return Complex ( re , im );
}



double Complex::Modulo( const Complex& x)
    { return std::hypot( x.m_re, x.m_im ); }
