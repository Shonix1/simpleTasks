//������������ ������ �����, ��������� ���������� ������� �����
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int baseNumber=0;
int exponentNumber=0;
int i=0;
for (i=0; i<1;)
{
    cout<<"������� �����: ";
    cin>>baseNumber;
    cout<<"������� ������� �����: ";
    cin>>exponentNumber;
    cout<<baseNumber<<"^"<<exponentNumber<<"="<<pow(baseNumber,exponentNumber)<<endl;
    cout<<"������� ��������� ������ ��������� ��� ����������? 0 - ����������, 1 - ���������: ";
    cin>>i;
}
return 0;
}
