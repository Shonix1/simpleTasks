#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int handNumber;
cout<<"������� ���������� ����� ����: ";
cin>>handNumber;
if (handNumber==1)
{
    cout<<"������� �����"<<endl;
}
else if (handNumber==2)
{
    cout<<"������������ �����"<<endl;
}
else if (handNumber==3)
{
    cout<<"������� �����"<<endl;
}
else if (handNumber==4)
{
    cout<<"���������� �����"<<endl;
}
else if (handNumber==5)
{
    cout<<"�������"<<endl;
}
else
{
    cout<<"�i �� ��������?"<<endl;
}
system("pause");
return 0;
}
