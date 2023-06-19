#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, r, d;
	setlocale (LC_ALL, "Russian");
	cout << "Введите через пробел координаты точки"<<endl;
	cin >> x >> y ;
	cout << "Введите радиус окружности"<<endl;
	cin >> r;
	d = pow((x*x + y*y) , 0.5);
	
	if (d < r)
	 	cout << "Данная точка лежит внутри окружности";
	 else if (d == r) 
	 	cout << "Данная точка лежит на окружности";
	 else
	 	cout << "Данная точка лежит за пределами окружности окружности";
	 	
	return 0;
}
