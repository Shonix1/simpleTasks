//необходимо узнать сколько было посетилей, их максимальный возраст, их минимальный возраст и средний возраст среди посетителей
#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int amountUsers;
int ageUser;
int minAge=100; //не смог додуматься поставить минимальным возрастом 100, ставил 0, из за чего проверка условия не работала
int maxAge=0;
int sum=0;
cout<<"Сколько посетителей за день: ";
cin>>amountUsers;
for (int i=1; i<=amountUsers; i++)
{
    cout<<"Введите возраст каждого посетителя: ";
    cin>>ageUser;
    if (ageUser>=maxAge)
    {
        maxAge=ageUser;
    }
    if (ageUser<=minAge)
    {
        minAge=ageUser;
    }
    sum+=ageUser; //вычисляем сумму всех возрастов
}
cout<<"Максисмальное значение: "<<maxAge<<endl;
cout<<"Минимальное значение: "<<minAge<<endl;
cout<<"Среднее значение: "<<sum/amountUsers<<endl; //вычисляем среднее
return 0;
}
