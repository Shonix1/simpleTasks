#include <iostream>
using namespace std;


template <typename T_1, typename T_2>
T_1 findMax(T_1 firstNum, T_2 secondNum)
{
	if (firstNum > secondNum)
		return firstNum;
	else if (secondNum > firstNum)
		return secondNum;
	else
		return 0;
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Сравниваем 255 и 700! Большее = " << findMax(255, 700) << endl;
	cout << "Сравниваем 8.5 и 4.9! Большее = " << findMax(8.5, 4.9) << endl;
	// ошибки не будет:
	cout << "Сравниваем 100 и 5.1! Большее = " << findMax(100, 5.1) << endl;

	return 0;
}