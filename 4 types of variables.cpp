#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Rus");
    int var1;
    double var2;
    float var3;
    bool var4;
    cout<<"������� 4 ����������:"<<endl;
    cout<<"������� ���������� � ���� ������ �����: ";
    cin>>var1;
    cout<<"������� ���������� � ���� ����� � ������� ���������: ";
    cin>>var2;
    cout<<"������� ���������� � ���� ����� � ��������� �������: ";
    cin>>var3;
    cout<<"������� ���������� � ���� ������� ������� (1 ��� 0): ";
    cin>>var4;
    cout<<"���� 4 ����������: "<<endl;
    cout<<var1<<endl<<var2<<endl<<var3<<endl<<var4<<endl;
    system("pause");
    return 0;
}
