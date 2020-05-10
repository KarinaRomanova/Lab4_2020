#include <iostream>
#include <list>
#include <iterator>
#include "Point.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int k;
	k = 0;
	Point point1(1.0, 1.0, 1.0);
	Point point2(2.0, 2.0, 2.0);
	Point point3(3.0, 3.0, 3.0);
	Point point4(4.0, 4.0, 4.0);
	Point point5(5.0, 5.0, 5.0);
	list <Point> l2 = { point1,point2,point3,point4,point5 };
	list <Point> ::iterator it;

	Point userPoint1;
	Point userPoint2;
	Point userPoint3;
	userPoint1.SetNewCoord();
	userPoint2.SetNewCoord();
	userPoint3.SetNewCoord();

	list <Point> l1 = { userPoint1,userPoint2 ,userPoint3 };
	list <Point> ::iterator it_l1;

	for (it = l2.begin(); it != l2.end();it++ )
		for (it_l1 = l1.begin(); it_l1 != l1.end(); it_l1++)
		{
			if (*it == *it_l1)
				k++;
		}

	if (k == 3)
		cout << "Список содержит заданные координаты" << endl;
	else 	cout << "Список не содержит заданные координаты" << endl;

	return 0;
}