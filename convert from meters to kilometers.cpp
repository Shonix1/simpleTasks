#include <iostream>

using namespace std;
/*
ѕрограмма должна переводить число, введенное с клавиатуры в метрах, в километры.
*/
int main()
{
    setlocale(LC_ALL, "rus");
    double metersValue;
    double kilometersValue;
    cout<<"¬ведите количество метров: ";
    cin>>metersValue;
    kilometersValue=metersValue/1000;
    if(metersValue==1)
    {
        cout<<metersValue<<" метр будет "<<kilometersValue<<" километра"<<endl;;
    }
    else if (metersValue>=2&&metersValue<=4)
    {
        cout<<metersValue<<" метра будет "<<kilometersValue<<" километра"<<endl;
    }
    else if (metersValue>=5&&metersValue<=20)
    {
        cout<<metersValue<<" метров будет "<<kilometersValue<<" километра"<<endl;
    }
    return 0;
}
