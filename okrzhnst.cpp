#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, r, d;
	setlocale (LC_ALL, "Russian");
	cout << "������� ����� ������ ���������� �����"<<endl;
	cin >> x >> y ;
	cout << "������� ������ ����������"<<endl;
	cin >> r;
	d = pow((x*x + y*y) , 0.5);
	
	if (d < r)
	 	cout << "������ ����� ����� ������ ����������";
	 else if (d == r) 
	 	cout << "������ ����� ����� �� ����������";
	 else
	 	cout << "������ ����� ����� �� ��������� ���������� ����������";
	 	
	return 0;
}
