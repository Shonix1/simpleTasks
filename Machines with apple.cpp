#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int amountBoxes=0;
int n=0;
amountBoxes=15;
cout<<"Всего ящиков с яблоками на складе: "<<amountBoxes<<" "<<endl;
for(int i=1; ; i++) //не нужно было добавлять условие i<=amountBoxes, в остальном делал всёё правильно, из за не правильного условия программа работала корректно лишь отчасти
{
    cout<<"Сколько ящиков погрузить в машину № "<<i<<": ";
    cin>>n;
    amountBoxes-=n;
    if(amountBoxes<0)
        {
            cout<<"Вы не можете погрузить столько яблок"<<endl;
            break;
        }
        else if (amountBoxes>0)
    cout<<"На складе осталось "<<amountBoxes<<" ящиков с яблоками"<<endl;

   else
        {
            cout<<"На складе не осталось яблок. Машин с яблоками: "<<i<<endl;

        break;
        }


}
system("pause");
return 0;
}
