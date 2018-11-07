#include "geometry.h"

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}

double Point::getX() {
	return this->x;
}

double Point::getY() {
	return this->y;
}

void Point::setX(double x) {
	this->x = x;
}

void Point::setY(double y) {
	this->y = y;
}

Rectangle::Rectangle() {
	this->p1.setX(0.0);
	this->p1.setY(0.0);
	width = 50;
	height = 50;	
}

Rectangle::Rectangle(Point p1, double width, double height) {
	this->p1.setX(p1.getX());
	this->p1.setY(p1.getY());
	this->width = width;
	this->height = height;
}

Point Rectangle::getP1() {
	return p1;
}

double Rectangle::getWidth() {
	return width;
}

double Rectangle::getHeight() {
	return height;
}

void Rectangle::setWidth(double width) {
	this->width = width;
}

void Rectangle::setHeight(double height) {
	this->height = height;
}

double max(double x, double y) {
	if (x > y)
		return x;
	else
		return y;
}

double min(double x, double y) {
	if (x < y)
		return x;
	else
		return y;
}

Rectangle Rectangle::function(Rectangle A, Rectangle B) {	
	Rectangle N;
	double maxX_A, minX_A, maxX_B, minX_B;
	double maxY_A, minY_A, maxY_B, minY_B;	

	//max(X,Y)_A - wspolrzedne prawego gornego rogu prostokata
	//min(X,Y)_A - wspolrzedne lewego dolnego rogu prostokata
	maxX_A = A.p1.getX() + A.width;
	maxX_B = B.p1.getX() + B.width;
	minX_A = A.p1.getX();
	minX_B = B.p1.getX();
	maxY_A = A.p1.getY() + A.height;
	maxY_B = B.p1.getY() + B.height;
	minY_A = A.p1.getY();
	minY_B = B.p1.getY();

	//sprawdzenie czy jest czesc wspolna
	if ((maxX_A <= minX_B) || (maxX_B <= minX_A) || (maxY_A <= minY_B) || (maxY_B <= minY_A)) {
		N.p1.setX(0.0);
		N.p1.setY(0.0);
		N.width = 0.0;
		N.height = 0.0;
	} else {
		N.p1.setX((max(minX_A, minX_B)));
		N.p1.setY((max(minY_A, minY_B)));
		N.width = (min(maxX_A, maxX_B) - max(minX_A, minX_B));
		N.height = (min(maxY_A, maxY_B) - max(minY_A, minY_B));
	}
	return N;
}
