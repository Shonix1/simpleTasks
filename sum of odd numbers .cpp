#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int rangeBegin = 0;
	int rangeEnd = 0;
	int sumMain = 0;
	
	cout << "������� �������� �����: "<<endl;
	cout << "��� �������� ����� ����� ���������� ��: ";
	cin >> rangeBegin;
	cout << "��� �������� ����� ����� �������������: ";
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
	cout << "����� �������� ����� � ��������� �� " << rangeBegin << " �� " << rangeEnd << endl;
	cout << "����� ����� " << sumMain << endl;
	
	system("pause");
	return 0;
}
