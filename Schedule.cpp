#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Rus");
    int answer=0;
    bool var = true;
    cout<<"������� ���� ������ (�� 1 �� 7): ";
    do{
        cin>>answer;
    switch(answer)
    {
    case 1:
        cout<<"\t�����������:"<<endl;
        cout<<"���������������� 2 ����, ���������� ���� 1 ���"<<endl;
        break;
    case 2:
        cout<<"\t�������:"<<endl;
        cout<<"�������� ������ � ����"<<endl;
        break;
    case 3:
        cout<<"\t�����"<<endl;
        cout<<"���������������� 2 ����, ������� 1 ���, ����� ������ �����"<<endl;
        break;
    case 4:
        cout<<"\t�������"<<endl;
        cout<<"��������, ���������������� 2 ����, ���������� 1 ���"<<endl;
        break;
    case 5:
        cout<<"\t�������"<<endl;
        cout<<"�������� ����, ���������� � ������� �����: �������. ������� ���� 1 ��� + ���������������� 2 ����"<<endl;
        break;
    case 6:
        cout<<"\t�������"<<endl;
        cout<<"�������� ������ � ����"<<endl;
        break;
    case 7:
        cout<<"\t�����������"<<endl;
        cout<<"���������������� 2 ����, ������� 1 ���, ����� ������ �����"<<endl;
        break;
    default:
        cout<<"�������� ���������� ����� ������ (�� 1 �� 7)"<<endl;
    }
    if (answer>=1&&answer<=7)
        var=false;}
        while (var);

    system("pause");
    return 0;
}
