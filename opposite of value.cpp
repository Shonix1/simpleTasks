#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Rus");
    int a=5678;
    cout<<a<<endl;

    cout<<"Обратное число "<<a%10;
    a/=10;
    cout<<a%10;
    a/=10;
    cout<<a%10;
    a/=10;
    cout<<a%10<<endl;
    system("pause");
    return 0;
}
