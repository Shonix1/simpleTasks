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
	cout << "��������� ����� ���������� ����������� �� 1 �� 7: ";
	cin >> userNumber;
	do 
	{
		cout << "���������� ��� ���: ";
		cin >> userNumber;
	} while (userNumber != randNumber);
	
	cout << "�� �������! ����������!" << endl;
	
	return 0;
}