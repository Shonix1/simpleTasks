#include <iostream>
#include <cctype>
/*
�������� ���������, ������� ��������� ������������ ������ � ������� ��������� ����� ������� ��������,
��������� � � ������� ������� � ��������� ������� � �������.
*/
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    char someLetter;
    cout<<"������� ����� ������� ��������: ";
    cin>>someLetter;
    cout<<"�� �� �����, �� � ������� ��������: "<<(char)toupper(someLetter);
    return 0;
}
