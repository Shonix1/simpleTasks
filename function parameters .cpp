#include <iostream>
using namespace std;

// ������� ������ �������������
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

	cout << "���������� ��������� �� ���������.\n\n";
	drawRectangle(); // �� �������� � ������� ������� ����������

	cout << "����� ������ ���������� �������� � ������, � ����������\n"
		<< "�������� � ������ � ��� ������  ������� �� ���������.\n\n";
	drawRectangle(5);

	cout << "������ ������ ������.\n\n";
	drawRectangle(4,5,'$');
	return 0;
}