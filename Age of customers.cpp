//���������� ������ ������� ���� ���������, �� ������������ �������, �� ����������� ������� � ������� ������� ����� �����������
#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int amountUsers;
int ageUser;
int minAge=100; //�� ���� ���������� ��������� ����������� ��������� 100, ������ 0, �� �� ���� �������� ������� �� ��������
int maxAge=0;
int sum=0;
cout<<"������� ����������� �� ����: ";
cin>>amountUsers;
for (int i=1; i<=amountUsers; i++)
{
    cout<<"������� ������� ������� ����������: ";
    cin>>ageUser;
    if (ageUser>=maxAge)
    {
        maxAge=ageUser;
    }
    if (ageUser<=minAge)
    {
        minAge=ageUser;
    }
    sum+=ageUser; //��������� ����� ���� ���������
}
cout<<"������������� ��������: "<<maxAge<<endl;
cout<<"����������� ��������: "<<minAge<<endl;
cout<<"������� ��������: "<<sum/amountUsers<<endl; //��������� �������
return 0;
}
