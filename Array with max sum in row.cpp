#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
//��������� ������ ���������� ������� �� 10 �� 100 �������� ����� ������ ������ � ������� ������ � ������������ ������
int main()
{
	setlocale(LC_ALL, "rus");

    const int rowsCount=5;
    const int columnsCount=5;
    int simpleArray[columnsCount][rowsCount]{};
    int sumRows=0;
    int maxValue=0;
    int maxSumRows=0;

    srand(time(NULL));
    for (int i=0; i<columnsCount; i++)
    {
        for (int j=0; j<rowsCount; j++)
        {
            simpleArray[i][j]=10+rand()%91;
        }
    }
    for (int i=0; i<columnsCount; i++)
    {
        for (int j=0; j<rowsCount; j++)
        {
            cout<<setw(4)<<simpleArray[i][j];
        }
        cout<<endl;
    }
    for (int i=0; i<rowsCount; i++)
    {
        for (int j=0; j<columnsCount; j++)
        {
            sumRows+=simpleArray[i][j];
            if(sumRows>maxValue)
            {
                maxValue=sumRows;
                maxSumRows=i+1;
            }
        }
        cout<<"����� ������ "<<i+1<<" : "<<sumRows<<endl;
    }
    cout<<"����������� ����� ���������� "<<maxValue<<" � ������ � "<<maxSumRows<<endl;
    return 0;
}
