#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");

float sumDeposit = 0; // ����� ��������
int amountMonth = 0; // ���������� �������
float profit = 0; // �������
float annualRate = 5; // ���� ��������� �������
int daysInYear = 365;
int daysInMonth = 30;

cout << "������� ����� �������� � ��������: ";
	cin >> sumDeposit;
cout << "������� ���������� �������: ";
	cin >> amountMonth;

cout << "\n������\n";
cout << "=======================================\n";
cout << "�������� � �����: ";
// �������� ������ �� ������� � ���������� � ���������� profit
profit = sumDeposit * (annualRate / 100)  / daysInYear * daysInMonth;

cout << sumDeposit << " * " << annualRate << "%  / " << daysInYear
	 << " * " << daysInMonth << " = " << profit << " $" << endl;

cout << "���������� ������� �� ���� ����: ";
// �������� % �� 1 ����� �� ���� ���� �������� � ���������� � profit
profit *= amountMonth;
cout << profit << " $"  << endl;

cout << "����� ����� � ����� �����: "
	 << sumDeposit + profit  << " $";
cout << endl << endl;
system("pause");
return 0;
}
