#include "Printer.h"
#include <stdarg.h>
#include <cstring>
#include <iostream>

void Printer::PrintAdd(int a, int b)
{
	cout<<a + b;
}

void Printer::PrintAdd(int a, int b, int c)
{
	cout<<a + b + c;
}

void Printer::PrintAdd(double a, double b)
{
	cout<<int(a + b);
}

void Printer::PrintAdd(double a, double b, double c)
{
	cout<<int(a + b + c);
}

void Printer::PrintMul(int a, int b)
{
	cout<<a * b;
}

void Printer::PrintMul(int a, int b, int c)
{
	cout<<a * b * c;
}

void Printer::PrintMul(double a, double b)
{
	cout<<int(a * b);
}

void Printer::PrintMul(double a, double b, double c)
{
	cout<<int(a * b * c);
}



void Printer::PrintAdd(const char* a, const char* b)
{
	if (a == nullptr or b == nullptr)
        return nullptr;
	int la = 0, lb = 0;
	while (a[la] != '\0')
		la++;
	while (b[lb] != '\0')
		lb++;
	char* rez = new char[la+lb+1];

	for (int i = 0; i < la; i++)
		rez[i] = a[i];
	for (int i = la; i <= la+lb; i++)
		rez[i] = b[i-la];
	cout<<rez;
delete rez;

}


