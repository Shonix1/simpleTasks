#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int i=1;
	double userNumber=0;
	double sumUserNumbers=0;
	double averageUserNumber=0;
	int exitPoint=0;
	while (exitPoint==0)
    {
        cout<<"Введите число #"<<i<<": ";
        cin>>userNumber;
        sumUserNumbers+=userNumber;
        averageUserNumber=sumUserNumbers/i;
        cout<<"Для продолжения ввода чисел введите 0"<<endl;
        cout<<"Для завершения ввода чисел нажмите 1 "<<endl;
        cin>>exitPoint;
            if (exitPoint==0)
                {
                    i++;
                    continue;
                }
            else if (exitPoint==1)
                break;
            else
            {
                for (;;)
                {
                    cout<<"Введите число 0 или 1 для работы с программой: "<<endl;
                    cin>>exitPoint;
                    if (exitPoint==0)
                    {
                        i++;
                        break;
                    }
                    else if (exitPoint==1)
                        break;
                    else
                        continue;
                }
            }

    }


    cout<<"Было введено чисел: "<<i<<endl;
    cout<<"Их общая сумма равна: "<<sumUserNumbers<<endl;
    cout<<"Среднее арифметическое данных чисел составляет: "<<averageUserNumber<<endl;
	return 0;
}
