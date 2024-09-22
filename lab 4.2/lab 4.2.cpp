// Lab_04.1.cpp
// Стеців Максим Любомирович
// Лабораторна робота № 04.1
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 15

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
 double x, xp, xk, dx, A, B, y;
 cout << "xp = "; cin >> xp;
 cout << "xk = "; cin >> xk;
 cout << "dx = "; cin >> dx;

 cout << fixed;
 cout << "---------------------------" << endl;
 cout << "|" << setw(5) << "x" << "     |"
 << setw(7) << "y" << "       |" << endl;
 cout << "---------------------------" << endl;

 x = xp;
 while (x <= xk)
 {
     A = x * x * x + 2;
	 if (x < 4)
		 B = 5 * pow(x,8) + pow(x,6) - x * x + 3;
	 if (4 <= x && x < 7)
		 B = atan(abs((x + 3) / 2)) + 7 * x; // для acrtg використовується  atan
	 if (x >= 7)
		 B = log10(2 * x + exp(5 * x + 5)); // для lg використовується  log10 для e використовується exp
	 y = A + B;

 y = A + B;

 cout << "|" << setw(7) << setprecision(2) << x
 << "   |" << setw(10) << setprecision(3) << y
 << "    |" << endl;
 x += dx;
 }
 cout << "---------------------------" << endl;
 return 0;
}