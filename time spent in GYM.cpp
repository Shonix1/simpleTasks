#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int amountUsers=0;
int hourUser=0;
int allHoursSum=0;
cout<<"������� ���������� ����������� �������: ";
cin>>amountUsers;
for(int i=1; i<=amountUsers; i++)
{
    cout<<"������� ����� ��������� ���������� � "<<i<<": ";
    cin>>hourUser;
    allHoursSum+=hourUser;
}
cout<<"����� ����� �����������: "<<allHoursSum<<endl;
system("pause");
return 0;
}
