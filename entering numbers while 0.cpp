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
        cout<<"������� ����� #"<<i<<": ";
        cin>>userNumber;
        sumUserNumbers+=userNumber;
        averageUserNumber=sumUserNumbers/i;
        cout<<"��� ����������� ����� ����� ������� 0"<<endl;
        cout<<"��� ���������� ����� ����� ������� 1 "<<endl;
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
                    cout<<"������� ����� 0 ��� 1 ��� ������ � ����������: "<<endl;
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


    cout<<"���� ������� �����: "<<i<<endl;
    cout<<"�� ����� ����� �����: "<<sumUserNumbers<<endl;
    cout<<"������� �������������� ������ ����� ����������: "<<averageUserNumber<<endl;
	return 0;
}
