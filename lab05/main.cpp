// Prosze napisac klasy Point2D, oraz Point2DAverage
// reprezentujace odpowiednio:
// 1) punkt na plaszczyznie (x,y);
// 2) funktor
//
// ad.1 Klasa reprezentująca punkt na plaszczyznie (x,y). Dodatkowo
//      trzeba zdefiniowac dla niej operatory post/pre inkrementacji 
//      (modyfikujące odpowiednio zarówno x jak i y o wartość 1).
//      Obikety tej klasy można w prosty sposób przekazywać do standardowego
//      wyjscia (std::cout)
//
// ad.2. Klasa stanowiaca obiekt funkcyjny (funktor), obliczający średnią 
//       arytmetyczną z podanych w argumencie Point2D (srednia arytmetyczna osobno dla x i y)
//       i aktualizujący wynik z każdym kolejnym wywołaniem.
//       Funkcja Reset() to funkcja resetująca stan funktora.
//
// ad.3. Fragment kodu (czesc III) uzywajacy algorytmu zadziala poprawnie, 
//       gdy kod obsugujacy wczesniejsze dwie czesci zostana poprawnie napisany. 
//       Zostala on dodany, aby zobrazowac praktyczne zastosowanie funktora.

#include "Point2D.h"
#include "Point2DAverage.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	cout << "*** PART I: POINTS ON THE PLANE ***"<< endl;
	const Point2D point1(1.2, 0.5);
	Point2D point2(0.8, 0.5);
	Point2D point3;

	cout<< "Point(1) :: " << point1 << endl;
	cout<< "Point(2) :: " << --point2 << endl;
	cout<< "Point(3) :: " << point3++ << endl;
	cout<< "Point(3) :: " << point3 << endl;

	Point2D point4 = 0.5 + point1 + point2;
	cout<< "Point(4) :: " << point4 << endl;

	cout << "*** PART II: AVEDRAGE POINT ON THE PLANE ***"<< endl;
	Point2DAverage averagePoint;
	cout<< "AveragePoint(1) :: " << averagePoint(point1) << endl;
	cout<< "AveragePoint(2) :: " << averagePoint(point2) << endl;

	averagePoint.reset();
	cout<< "AveragePoint(3) :: " << averagePoint(point1) << endl;
	cout<< "AveragePoint(4) :: " << averagePoint(point2) << endl;
	cout<< "AveragePoint(5) :: " << averagePoint(point4) << endl;

	cout<< "AveragePoint(6) :: " << averagePoint << endl;

	cout << "*** PART III: USING ALGORITHM!!! ***"<< endl;
	Point2D points[] = { point1, point2, point4 };
	cout<< "AveragePoint(7) :: " << for_each(points, points + sizeof(points)/sizeof(Point2D), Point2DAverage()) << endl;	

	return 0;
}

/* Output
*** PART I: POINTS ON THE PLANE ***
Point(1) :: (1.2,0.5)
Point(2) :: (-0.2,-0.5)
Point(3) :: (0,0)
Point(3) :: (1,1)
Point(4) :: (1.5,0.5)
*** PART II: AVEDRAGE POINT ON THE PLANE ***
AveragePoint(1) :: (1.2,0.5)
AveragePoint(2) :: (0.5,0)
AveragePoint(3) :: (1.2,0.5)
AveragePoint(4) :: (0.5,0)
AveragePoint(5) :: (0.833333,0.166667)
AveragePoint(6) :: (0.833333,0.166667)
*** PART III: USING ALGORITHM!!! ***
AveragePoint(7) :: (0.833333,0.166667)
*/
