#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int multiplicationNumber1, multiplicationNumber2, multiplicationNumberMain, multiplicationNumberUser;
cout<<"������ ��������� �������� ���� ������ �� ������� ���������!"<<endl;

cout<<"������� ������ �����: ";
cin>>multiplicationNumber1;

cout<<"������� ������ �����: ";
cin>>multiplicationNumber2;

multiplicationNumberMain=multiplicationNumber1*multiplicationNumber2;

cout<<"��� �� ������� ������ ������������ ���� ���� �����? ������� ��� �����: ";
cin>>multiplicationNumberUser;

if (multiplicationNumberMain==multiplicationNumberUser)
    cout<<"����������! ��� ����� ����������!"<<endl;
else
{
    cout<<"� ��������� ��� ����� ������������! ����������� ��������� ������ � ������� ��� �����: ";
    cin>>multiplicationNumberUser;

    if (multiplicationNumberMain==multiplicationNumberUser)
        cout<<"�� ������� ������ ��� �������� � �������� ��� ����� ���������! �� ������� �������!"<<endl;
    else
        cout<<"��� ����� � ��������� ��������� �� ������. ���������� �����: "<<multiplicationNumberMain<<endl;
}
system("pause");
return 0;
}
