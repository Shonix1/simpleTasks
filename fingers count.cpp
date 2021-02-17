#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int handNumber;
cout<<"Введите порядковый палец руки: ";
cin>>handNumber;
if (handNumber==1)
{
    cout<<"Большой палец"<<endl;
}
else if (handNumber==2)
{
    cout<<"Указательный палец"<<endl;
}
else if (handNumber==3)
{
    cout<<"Средний палец"<<endl;
}
else if (handNumber==4)
{
    cout<<"Безимянный палец"<<endl;
}
else if (handNumber==5)
{
    cout<<"Мизинец"<<endl;
}
else
{
    cout<<"Тi шо пришелец?"<<endl;
}
system("pause");
return 0;
}
