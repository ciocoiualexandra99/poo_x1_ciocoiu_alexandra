#include <iostream>
#include "Canvas.h"
using namespace std;

int main()
{
	Canvas a(100, 100);
	a.SetPoint(5,5,'a');
	a.DrawLine(5, 5, 15, 15, 'a');
	a.DrawCircle(30, 20, 7, 'b');
	a.FillCircle(40, 60, 10, 'c');
	a.DrawRect(30, 5, 45, 12, 'd');
	a.FillRect(15, 6, 22, 10, 'e');
	a.Print();
	a.Clear();
	a.Print();
}
