#include <iostream>
#include "geometry.h"

int main(int argc, char *argv[])
{
	double x1, x2, y1, y2, width1, width2, height1, height2;

	std::cin >> x1 >> y1 >> width1 >> height1;
	std::cin >> x2 >> y2 >> width2 >> height2;

	//sprawdzenie czy wczytane wartosci maja sens 
	if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0 || width1 < 0 || height1 < 0 || width2 < 0 || height2 < 0)
		return -1;

	//obiekty
	Point p1(x1, y1);
	Point p2(x2, y2);
	Rectangle A(p1, width1, height1);
	Rectangle B(p2, width2, height2);
	Rectangle N;
	
	//uruchomienie glownej funkcji
	N = N.function(A, B);
	
	//wyswietlenie wartosci nowego prostokata
	std::cout << N.getP1().getX() << " " << N.getP1().getY() << " " << N.getWidth() << " " << N.getHeight() << "\n";
	
	return 0;
}	
