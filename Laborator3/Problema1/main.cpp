#include <iostream>
#include "Printer.h"
using namespace std;

int main()
{
	 Printer::PrintAdd(4, 5) << '\n';
	 Printer::PrintAdd(4, 5, 6) << '\n';
	 Printer::PrintAdd(4.5, 5.6) << '\n';
	 Printer::PrintAdd(4.5, 5.6, 6.9) << '\n';
	 Printer::PrintMul(4, 5) << '\n';
     Printer::PrintMul(4, 5, 6) << '\n';
	 Printer::PrintMul(4.5, (double) 5) << '\n';
	 Printer::PrintMul(4.5, 5.6, 6.9) << '\n';

	 Printer::PrintAdd("Sir de caractere 1 ", "+ Sir de caractere 2");
}

