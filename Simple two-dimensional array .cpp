#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//двумерный массив и вывод его на экран чисел в данном массиве. заполнил массив случайными числами.

int main()
{
	setlocale(LC_ALL, "rus");
	const int x=10;
	const int y=10;
    int randomArray[x][y]{};
    srand(time(NULL));
    for (int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            randomArray[i][j]=rand();
        }
    }
    for (int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cout<<randomArray[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
