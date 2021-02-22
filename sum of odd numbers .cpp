#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int rangeBegin = 0;
	int rangeEnd = 0;
	int sumMain = 0;
	
	cout << "Введите диапазон чисел: "<<endl;
	cout << "Ваш диапазон чисел будет начинаться от: ";
	cin >> rangeBegin;
	cout << "Ваш диапазон числе будет заканчиваться: ";
	cin >> rangeEnd;
	
	int a = rangeBegin;
	
	while (a <= rangeEnd)
	{
		if (a % 2 != 0)
		{
			cout << a << endl;
			sumMain += a;
		}
		a++;
	}
	cout << "Сумма нечётных чисел в диапазоне от " << rangeBegin << " до " << rangeEnd << endl;
	cout << "Будет равна " << sumMain << endl;
	
	system("pause");
	return 0;
}
