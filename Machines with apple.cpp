#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int amountBoxes=0;
int n=0;
amountBoxes=15;
cout<<"����� ������ � �������� �� ������: "<<amountBoxes<<" "<<endl;
for(int i=1; ; i++) //�� ����� ���� ��������� ������� i<=amountBoxes, � ��������� ����� �� ���������, �� �� �� ����������� ������� ��������� �������� ��������� ���� �������
{
    cout<<"������� ������ ��������� � ������ � "<<i<<": ";
    cin>>n;
    amountBoxes-=n;
    if(amountBoxes<0)
        {
            cout<<"�� �� ������ ��������� ������� �����"<<endl;
            break;
        }
        else if (amountBoxes>0)
    cout<<"�� ������ �������� "<<amountBoxes<<" ������ � ��������"<<endl;

   else
        {
            cout<<"�� ������ �� �������� �����. ����� � ��������: "<<i<<endl;

        break;
        }


}
system("pause");
return 0;
}
