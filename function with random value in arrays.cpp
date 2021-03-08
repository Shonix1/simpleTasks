#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

/*
ќбъ€вить два целочисленных массива  с разными размерами и написать функцию,
котора€ заполн€ет их элементы значени€ми и показывает на экран. ‘ункци€ должна принимать два параметра Ц массив и его размер.
*/
int fillArrays(int numbers[], int n);
int main()
{
	setlocale(LC_ALL, "rus");

    const int x=4;
    const int y=5;
    int firstArray[x]{};
    int secondArray[y]{};

    fillArrays(firstArray, x);
    cout<<endl;
    fillArrays(secondArray, y);

    return 0;
}
int fillArrays(int numbers[], int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        numbers[i]=1+rand()%91;
        cout<<setw(4)<<numbers[i];
    }
    return 0;
}

