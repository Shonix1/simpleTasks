#include <iostream>

using namespace std;
/*
��������� ������ ���������� �����, ��������� � ���������� � ������, � ���������.
*/
int main()
{
    setlocale(LC_ALL, "rus");
    double metersValue;
    double kilometersValue;
    cout<<"������� ���������� ������: ";
    cin>>metersValue;
    kilometersValue=metersValue/1000;
    if(metersValue==1)
    {
        cout<<metersValue<<" ���� ����� "<<kilometersValue<<" ���������"<<endl;;
    }
    else if (metersValue>=2&&metersValue<=4)
    {
        cout<<metersValue<<" ����� ����� "<<kilometersValue<<" ���������"<<endl;
    }
    else if (metersValue>=5&&metersValue<=20)
    {
        cout<<metersValue<<" ������ ����� "<<kilometersValue<<" ���������"<<endl;
    }
    return 0;
}
