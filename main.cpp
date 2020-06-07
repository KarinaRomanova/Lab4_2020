#include <iostream>
#include <list>
#include <iterator>
#include "Point.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Point point1(1.0, 1.0, 1.0);
	Point point2(2.0, 2.0, 2.0);
	Point point3(3.0, 3.0, 3.0);
	Point point4(4.0, 4.0, 4.0);
	Point point5(5.0, 5.0, 5.0);

 List myList;

 myList.addNode(point1);
 myList.addNode(point2);
 myList.addNode(point3);
 myList.addNode(point4);
 myList.addNode(point5);


Point userPoint1;
Point userPoint2;
Point userPoint3;

userPoint1.SetNewCoord();
userPoint2.SetNewCoord();
userPoint3.SetNewCoord();

 List userList;
 userList.addNode(userPoint1);
 userList.addNode(userPoint2);
 userList.addNode(userPoint3);

 Node* current = myList.head;
 Node* _current = userList.head;

 int counterGlobal = 0;
 int counterInclude = 0;
 int myPoints = 0;
 int userPoints = 0;
 while (current != NULL)
 {
     current = current->next;
     myPoints++;
 }
while (_current != NULL)
{
   _current = _current->next;
    userPoints++;
}
current = myList.head;
_current = userList.head;
if (userPoints > myPoints)
{
    cout << "������ ������ ������ �������, ���������� ��������� ���������" << endl;
    return 0;
}
 while (current != NULL)
 {
     if (current->point == _current->point) 
     {
         counterInclude++;
     }
      _current = _current->next;
      if (_current == NULL) 
      {
        current= current->next;
        _current = userList.head;
     
      }
        counterGlobal++;
 }
 if ((counterGlobal/myPoints)==counterInclude)
 {
     cout << "������ ������"<<endl;
 }
 else {
     cout << "������ �� ������" << endl;
 }
	return 0;
}