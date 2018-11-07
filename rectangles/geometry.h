class Point {
	private:
		double x, y;
	public:
		Point();
		Point(double, double);
		double getX();
		double getY();
		void setX(double);
		void setY(double);		
};

class Rectangle {
	private:
		Point p1;
		double width, height;
	public:
		Rectangle();
		Rectangle(Point, double, double);
		Point getP1();
		double getWidth();
		double getHeight();
		void setWidth(double);
		void setHeight(double);
		Rectangle function(Rectangle, Rectangle);
};

double max(double, double);
double min(double, double);


