#include <iostream>
using namespace std;
/*
«апрограммировать следующее выражение: (а + b Ч f / а) + f * a * a Ч (a + b) „исла а, b, f ввод€тс€ с клавиатуры. 
ќрганизовать пользовательский интерфейс, таким образом, чтобы было пон€тно, в каком пор€дке должны вводитьс€ числа.
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
	cout << "¬ведите цифры a, b и f:" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "f=";
	cin >> f;
	cout << "¬ычисл€ем формулу x=(а + b Ч f / а) + f * a * a Ч (a + b)" << endl;
	cout << "x=" << countFormula(a, b, f)<<endl;
	return 0;
}