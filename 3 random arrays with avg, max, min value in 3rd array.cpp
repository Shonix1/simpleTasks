#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	const int SIZE = 10;
	int randArray0[SIZE]{};
	int randArray1[SIZE]{};
	int randArray2[SIZE]{};
	int arraySum = 0;
	double arrayAverage = 0;
	int maxValue = 0;
	int minValue = 100;
	
	srand(time(NULL));
	
	cout << "Массив чисел 1: ";
	for (int i = 0; i < SIZE; i++)
	{
		randArray0[i] = 10 + rand() % 21;
		cout << randArray0[i] << " ";
	}
	cout << endl;
	
	cout << "Массив чисел 2: ";
	for (int i = 0; i < SIZE; i++)
	{
		randArray1[i]= 10 + rand() % 21;
		cout << randArray1[i] << " ";
	}
	cout << endl;
	
	cout << "Массив чисел 3: ";
	for (int i = 0; i < SIZE; i++)
	{
		randArray2[i] = randArray0[i] + randArray1[i];
		arraySum += randArray2[i];
		if (randArray2[i] > maxValue)
		{
			maxValue = randArray2[i];
		}
		if (randArray2[i]< minValue)
		{
			minValue = randArray2[i];
		}
		cout << randArray2[i] << " ";
	}
	cout << endl;
	
	arrayAverage = arraySum / SIZE;
	cout << "Среднее значение массива №3: " << arrayAverage << endl;
	cout << "Минимальное значение массива №3: " << minValue << endl;
	cout << "Максимальное значение массива №3: " << maxValue << endl;
	cout << endl;
	return 0;
}