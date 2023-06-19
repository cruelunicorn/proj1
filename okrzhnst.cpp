#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, r, d;
	setlocale (LC_ALL, "Russian");
	cout << "Ââåäèòå ÷åðåç ïðîáåë êîîðäèíàòû òî÷êè" << endl;
	cin >> x >> y ;
	cout << "Ââåäèòå ðàäèóñ îêðóæíîñòè ñ öåíòðîì (0, 0)" << endl;
	cin >> r;
	d = pow((x*x + y*y) , 0.5);
	if (d < r)
	 	cout << "Äàííàÿ òî÷êà ëåæèò âíóòðè îêðóæíîñòè";
	else if (d == r)
		
	else 
	 	cout << "Äàííàÿ òî÷êà ëåæèò çà ïðåäåëàìè îêðóæíîñòè";
	return 0;
}
