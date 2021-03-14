#include <iostream>
using namespace std;

int main()
{
	//»спользу€ один оператор вывода cout, программа должна напечатать пр€моугольный треугольник из символов знака плюс +
	setlocale(LC_ALL, "rus");
	int const n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "+";
		}
		cout<<endl;
	}
	return 0;
}