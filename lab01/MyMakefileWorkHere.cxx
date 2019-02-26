// Nazwa pliku wykonywalnego: Rational

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze napisac klase Rational reprezentujacą liczby wymierne (licznik/mianownik).
// Dodatkowo, proszę zaimplementować metody, funkcje działające na liczbach typu Rational.
// Metody te mogą być zaimplementowane w ramach klasy Fun;

// Pliku MyMakefileWorkHere.cxx, nie wolno modyfikowac. Nie mozna zmieniac
// jego nazwy ani rozszerzenia.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 


#include <iostream>
#include <cmath>
#include "MyMakefileWorkHere.hxx"

int main() {
  
  Rational Raz(1, 2);
  Raz.Print();

  const Rational Dwa(2, 3);
  Dwa.Print();

  const Rational Wynik0 = Fun::Add(Dwa,Dwa);
  Wynik0.Print();

  Rational Wynik1 = Fun::Multiply(Raz, Dwa);
  Wynik1.Print();

  Rational Wynik2 = Fun::Add(Raz, 5);
  Wynik2.Print();

  Rational Wynik3 = Fun::Divide(10, Dwa);
  Wynik3.Print();

  float wynikF = std::sqrt(Wynik3);
  std::cout<< wynikF << std::endl;

  Fun::Average(Raz);
  Fun::Average(Dwa);
  std::cout << "Average: " << float(Fun::Average()) <<std::endl;

  return 0;
}

/** Wynik dzialania programu:
1/2
2/3
4/3
1/3
11/2
15
3.87298
Average: 0.583333
*/
