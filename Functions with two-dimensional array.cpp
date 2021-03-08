#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;
/*
���������� ������� ��������� ������ 5 � 5. �����
�������� �������, ������� �������� ��� ���������� ������� ��  30 �� 60.
������� ��� ��� �������, ������� ������� ������������ � ����������� �������� ����� ���������� �������.
*/
int fillArrayWithNumbers(int numbers[][5], int n);
int findMaxValue(int numbers[][5], int n);
int findMinValue(int numbers[][5], int n);
int main()
{
    setlocale(LC_ALL, "rus");

    const int columnSize=5;
    const int rowSize=5;
    int simpleArray[columnSize][rowSize]{};
    fillArrayWithNumbers(simpleArray, columnSize);
    findMaxValue(simpleArray, columnSize);
    findMinValue(simpleArray, columnSize);
    return 0;
}

int fillArrayWithNumbers(int numbers[][5], int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=5; j++)
        {
            numbers[i][j]=30+rand()%31;
            cout<<setw(4)<<numbers[i][j];
        }
        cout<<endl;
    }
    return 0;
}
int findMaxValue(int numbers[][5], int n)
{
    int maxValue=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=5; j++)
        {
            if (numbers[i][j]>maxValue)
            {
                maxValue=numbers[i][j];
            }
        }
    }
    cout<<"������������ ��������: "<<maxValue<<endl;
    return 0;
}
int findMinValue(int numbers[][5], int n)
{
    int minValue=numbers[0][0];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=5; j++)
        {
            if (numbers[i][j]<minValue)
            {
                minValue=numbers[i][j];
            }
        }
    }
    cout<<"����������� ��������: "<<minValue<<endl;
    return 0;
}
