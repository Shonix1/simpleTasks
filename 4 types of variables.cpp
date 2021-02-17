#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Rus");
    int var1;
    double var2;
    float var3;
    bool var4;
    cout<<"¬ведите 4 переменных:"<<endl;
    cout<<"¬ведите переменную в виде целого числа: ";
    cin>>var1;
    cout<<"¬ведите переменную в виде числа с двойной точностью: ";
    cin>>var2;
    cout<<"¬ведите переменную в виде числа с плавающей зап€той: ";
    cin>>var3;
    cout<<"¬ведите переменную в виде булевой функции (1 или 0): ";
    cin>>var4;
    cout<<"¬аши 4 переменные: "<<endl;
    cout<<var1<<endl<<var2<<endl<<var3<<endl<<var4<<endl;
    system("pause");
    return 0;
}
