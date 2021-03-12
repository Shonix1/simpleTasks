#include <iostream>
using namespace std;
/*
Составить программу, которая будет считывать введённое пятизначное число. После чего, каждую цифру этого числа необходимо вывести в новой строке.
*/
int main()
{
	setlocale(LC_ALL, "rus");
	int userNumber;
	cout << "\t\t\tДеления числа на разряды\n";
	cout << "Введите пятизначное число: ";
	cin >> userNumber;
	while(userNumber>100000||userNumber<=9999)
	{
		cout << "Введите пятизначное число: ";
		cin >> userNumber;
	}
	cout << "Число 1: " << userNumber / 10000 << endl;
	cout << "Число 2: " << (userNumber / 1000) % 10 << endl;
	cout << "Число 3: " << (userNumber / 100) % 10 << endl;
	cout << "Число 4: " << (userNumber / 10) % 10 << endl;
	cout << "Число 5: " << userNumber % 10 << endl;
	return 0;
}