#include <iostream>
using namespace std;
/*
��������� ���������, ������� ����� ��������� �������� ����������� �����. ����� ����, ������ ����� ����� ����� ���������� ������� � ����� ������.
*/
int main()
{
	setlocale(LC_ALL, "rus");
	int userNumber;
	cout << "\t\t\t������� ����� �� �������\n";
	cout << "������� ����������� �����: ";
	cin >> userNumber;
	while(userNumber>100000||userNumber<=9999)
	{
		cout << "������� ����������� �����: ";
		cin >> userNumber;
	}
	cout << "����� 1: " << userNumber / 10000 << endl;
	cout << "����� 2: " << (userNumber / 1000) % 10 << endl;
	cout << "����� 3: " << (userNumber / 100) % 10 << endl;
	cout << "����� 4: " << (userNumber / 10) % 10 << endl;
	cout << "����� 5: " << userNumber % 10 << endl;
	return 0;
}