#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
//�������� ��������� ������, ��������� ��� �������, ����� �������� �� ������ ���� ������ ������. ����� ��������� ����� ������ ������
// � ������� �������. �������� � ��� ��� � ��������� �������� �� �� ������� ������ ����� (������� ����� ������ ����� 1)
// � ������ ����� ����� ��� ����� � �� ������� ��� ����� ���� ��������  � ����� ����� �������� �����.
// ���� ���� ������� ��������� ��� ����� �����. ��� ������� ���� �� ���� �� �� ���������, �������� �������.....

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
        cout<<"����� ������� " << i+1 <<" : "<<sumColumns<<endl;
    }
    for (int i=0; i<columnCount; i++)
    {
        for (int j=0; j<rowCount; j++)
        {
            sumRows+=simpleArray[i][j];
        }
        cout<<"����� ������ " << i+1 <<" : "<<sumRows<<endl;
    }
    return 0;
}
