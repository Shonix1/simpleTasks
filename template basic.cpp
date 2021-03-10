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

	cout << "���������� 255 � 700! ������� = " << findMax(255, 700) << endl;
	cout << "���������� 8.5 � 4.9! ������� = " << findMax(8.5, 4.9) << endl;
	// ������ �� �����:
	cout << "���������� 100 � 5.1! ������� = " << findMax(100, 5.1) << endl;

	return 0;
}