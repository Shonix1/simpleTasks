#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int multiplicationNumber1, multiplicationNumber2, multiplicationNumberMain, multiplicationNumberUser;
cout<<"Данная программа проверит ваши знания по таблице умножения!"<<endl;

cout<<"Введите первое число: ";
cin>>multiplicationNumber1;

cout<<"Введите второе число: ";
cin>>multiplicationNumber2;

multiplicationNumberMain=multiplicationNumber1*multiplicationNumber2;

cout<<"Как вы думаете какого произведение двух этих чисел? Введите ваш ответ: ";
cin>>multiplicationNumberUser;

if (multiplicationNumberMain==multiplicationNumberUser)
    cout<<"Поздравляю! Ваш ответ правильный!"<<endl;
else
{
    cout<<"К сожалению ваш ответ неправильный! Произведите умножение заного и введите ваш ответ: ";
    cin>>multiplicationNumberUser;

    if (multiplicationNumberMain==multiplicationNumberUser)
        cout<<"Вы сделали работу над ошибками и умножили два числа правильно! Вы большой молодец!"<<endl;
    else
        cout<<"Ваш ответ к сожалению считается не верным. Правильный ответ: "<<multiplicationNumberMain<<endl;
}
system("pause");
return 0;
}
