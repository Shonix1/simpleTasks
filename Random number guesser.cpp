#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int randNumber = 0;
	int userNumber = 0;
	srand(time(NULL));
	randNumber = 1 + rand() % 7;
	cout << "Отгадайте число загаданное компьютером от 1 до 7: ";
	cin >> userNumber;
	do 
	{
		cout << "Попробуйте ещё раз: ";
		cin >> userNumber;
	} while (userNumber != randNumber);
	
	cout << "Вы угадали! Поздравляю!" << endl;
	
	return 0;
}