// Prosze napisac klasy Rational, Complex reprezentujace 
// odpowiednio liczby wymierne (licznik/mianownik) oraz zespolone (Re, Im).
// Dodatkowo, proszę zaimplementować podstawowe operacje na liczbach typu Complex.
// Algebra:
// Jesli dane są dwie liczby zespolone, w postaci kanonicznej:
// a+ib oraz c+id, to odpowiednie dzialania:
// + dodawanie liczb zespolonych: (a + c) + i(b + d) 
// * mnozenie liczb zespolonych: (a*c - b*d) + i(a*d + b*c) 
// Modulo(...) modul liczby zespolonej: sqrt(a*a + b*b) 
// - Prosze dodac minimalnym kosztem operacje odejmowania.

#include "Main.h"
#include <iostream>

int main() {

  Rational r(1,2);
  r.Print();

  Complex a(1,5);
  a.Print();

  #ifdef ERROR_SQRT
    // ta linijka ma generować error
	double aReRe = a;
  #endif  
  double aRe = static_cast<double>(a); // przypisanie czesci rzeczywistej
  
  std::cout << "Re(a) = " << aRe <<std::endl;
  std::cout << "Im(a) = " << a.Im() <<std::endl;
  std::cout << "  |a| = " << Complex::Modulo(a) <<std::endl;

  const Complex b = 4;
  b.Print();

  Complex c = a + b + b;
  c.Print();
  
  Complex d((a+6.0)*r);
  d.Print();

  Complex m = -a;
  m.Print();

  Complex k = b - a;
  k.Print();

  return 0;
}
/** Wynik dzialania programu:
1/2
1+5i
Re(a) = 1
Im(a) = 5
  |a| = 5.09902
4
9+5i
3.5+2.5i
-1-5i
3-5i
*/
