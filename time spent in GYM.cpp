#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int amountUsers=0;
int hourUser=0;
int allHoursSum=0;
cout<<"Введите количество посетителей сегодня: ";
cin>>amountUsers;
for(int i=1; i<=amountUsers; i++)
{
    cout<<"Сколько часов занимался посетитель № "<<i<<": ";
    cin>>hourUser;
    allHoursSum+=hourUser;
}
cout<<"Общее время посетителей: "<<allHoursSum<<endl;
system("pause");
return 0;
}
