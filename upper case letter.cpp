#include <iostream>
#include <cctype>
/*
Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра,
переводит её в верхний регистр и результат выводит в консоль.
*/
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    char someLetter;
    cout<<"Введите букву нижнего регистра: ";
    cin>>someLetter;
    cout<<"Та же буква, но в верхнем регистре: "<<(char)toupper(someLetter);
    return 0;
}
