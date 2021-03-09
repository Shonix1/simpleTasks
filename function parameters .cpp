#include <iostream>
using namespace std;

// функция рисует прямоугольник
void drawRectangle(int countSymb1 = 10, int countSymb2 = 10, char symb = '@')
{
	for (int i = 0; i < countSymb1; i++)
	{
		for (int j = 0; j < countSymb2; j++)
		{
			cout << symb;
		}
		cout << endl;
	}
	cout << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Используем параметры по умолчанию.\n\n";
	drawRectangle(); // не передаем в функцию никаких параметров

	cout << "Задаём другое количество символов в ширину, а количество\n"
		<< "символов в высоту и сам символ  оставим по умолчанию.\n\n";
	drawRectangle(5);

	cout << "Меняем только символ.\n\n";
	drawRectangle(4,5,'$');
	return 0;
}