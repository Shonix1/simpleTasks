#include <iostream>
using namespace std;
/*
����������������� ��������� ���������: (� + b � f / �) + f * a * a � (a + b) ����� �, b, f �������� � ����������. 
������������ ���������������� ���������, ����� �������, ����� ���� �������, � ����� ������� ������ ��������� �����.
*/

double countFormula(double someValue1, double someValue2, double someValue3)
{
	return (someValue1 + someValue1 - someValue3 / someValue1) + someValue3 * someValue1 * someValue1 -(someValue1 + someValue2);
}

int main()
{
	setlocale(LC_ALL, "rus");
	double a = 0;
	double b = 0;
	double f = 0;
	cout << "������� ����� a, b � f:" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "f=";
	cin >> f;
	cout << "��������� ������� x=(� + b � f / �) + f * a * a � (a + b)" << endl;
	cout << "x=" << countFormula(a, b, f)<<endl;
	return 0;
}