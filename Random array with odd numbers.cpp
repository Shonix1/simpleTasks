#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int randArray[50] = {};
	srand(time(NULL));
	for (int i = 0; i < 50; i++)
	{
		do
		{
			randArray[i]= 1 + rand() % 99;
		} while (randArray[i] % 2 == 0);

			cout << "Ёлемент номер " << i << " = " << randArray[i] << endl;
		
		
	}
	
	return 0;
}