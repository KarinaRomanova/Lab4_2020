#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(long double x, long double y, long double z)
	:x(x), y(y), z(z)
{}
Point::Point()
{
	x = 0; y = 0; z = 0;
}

Point Point::operator + (Point SecondPoint)
{
	return Point(this->x + SecondPoint.x, this->y + SecondPoint.y, this->z + SecondPoint.z);
}
Point Point::operator + (int a)
{
	return Point(this->x + a, this->y + a, this->z + a);
}

Point Point::operator - (int a)
{
	return Point(this->x - a, this->y - a, this->z - a);
}
Point Point::operator - (Point SecondPoint)
{
	return Point(this->x - SecondPoint.x, this->y - SecondPoint.y, this->z - SecondPoint.z);
}

Point& Point :: operator=  (Point SecondPoint)
{
	this->x = SecondPoint.x, this->y = SecondPoint.y, this->z = SecondPoint.z;
	return *this;
}

bool operator== (const Point& FirstPoint, const Point& SecondPoint)
{
	return (FirstPoint.x == SecondPoint.x && FirstPoint.y == SecondPoint.y && FirstPoint.z == SecondPoint.z);

}
bool operator!= (const Point& FirstPoint, const Point& SecondPoint)
{
	return !(FirstPoint == SecondPoint);
}
std::ostream& operator<< (std::ostream& out, Point& point)
{
	out << "\n(" << point.x << ", " << point.y << ", " << point.z << ")";
	return out;
}

void Point::SetNewCoord() {
	cout << "\n\nВедите координаты:\n";
	cout << "\tx = ";		cin >> x;
	cout << "\ty = ";		cin >> y;
	cout << "\tz = ";		cin >> z;
	Point point(this->x, this->y, this->z);
}