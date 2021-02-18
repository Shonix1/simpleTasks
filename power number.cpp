//Пользователь вводит число, программа показывает квадрат числа
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
    cout<<"Введите число: ";
    cin>>baseNumber;
    cout<<"Введите степень числа: ";
    cin>>exponentNumber;
    cout<<baseNumber<<"^"<<exponentNumber<<"="<<pow(baseNumber,exponentNumber)<<endl;
    cout<<"Желаете завершить работу программы или продолжить? 0 - продолжить, 1 - завершить: ";
    cin>>i;
}
return 0;
}
