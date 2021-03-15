#include <iostream>
using namespace std;


//Написать функцию которая меняет местами значения 2-х переменных
int Foo(int* a, int* b)
{
	int temp = *a;
	int metp = *b;
	(*a) = metp;
	(*b) = temp;
	return 0;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int a = 5;
	int b = 6;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl << endl;
	cout << "Foo" << endl<<endl;
	Foo(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}
