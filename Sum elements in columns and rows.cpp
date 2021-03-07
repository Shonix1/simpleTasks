#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
//объявить двумерный массив, заполнить его числами, затем показать на экране весь массив данных. Далее посчитать сумму каждой строки
// и каждого столбца. Проблема в том что я правильно расписал всё до момента вывода суммы (условно сумма строки номер 1)
// я сделал вывод суммы вне цикла и не понимал что сумму надо выводить  в самом цикле подсчёта суммы.
// хотя прям написал правильно сам вывод суммы. Крч решение было на носу но не додумался, пришлось гуглить.....

int main()
{
	setlocale(LC_ALL, "rus");
    const int rowCount=5;
    const int columnCount=5;
    int simpleArray[rowCount][columnCount]{};
    int sumRows=0;
    int sumColumns=0;

    srand(time(NULL));
    for (int i=0; i<rowCount; i++)
    {
        for (int j=0; j<columnCount; j++)
        {
            simpleArray[i][j]=rand();
        }
    }

    for (int i=0; i<rowCount; i++)
    {
        for (int j=0; j<columnCount; j++)
        {
            cout<<setw(7)<<simpleArray[i][j];
        }
        cout<<endl;
    }
    for (int i=0; i<rowCount; i++)
    {
        for (int j=0; j<columnCount; j++)
        {
            sumColumns+=simpleArray[i][j];
        }
        cout<<"Сумма столбца " << i+1 <<" : "<<sumColumns<<endl;
    }
    for (int i=0; i<columnCount; i++)
    {
        for (int j=0; j<rowCount; j++)
        {
            sumRows+=simpleArray[i][j];
        }
        cout<<"Сумма строки " << i+1 <<" : "<<sumRows<<endl;
    }
    return 0;
}
