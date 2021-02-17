#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Rus");
    int answer=0;
    bool var = true;
    cout<<"Введите день недели (от 1 до 7): ";
    do{
        cin>>answer;
    switch(answer)
    {
    case 1:
        cout<<"\tПонедельник:"<<endl;
        cout<<"Программирование 2 часа, Английский язык 1 час"<<endl;
        break;
    case 2:
        cout<<"\tВторник:"<<endl;
        cout<<"Основная работа в день"<<endl;
        break;
    case 3:
        cout<<"\tСреда"<<endl;
        cout<<"Программирование 2 часа, Финский 1 час, затем ночная смена"<<endl;
        break;
    case 4:
        cout<<"\tЧетверг"<<endl;
        cout<<"Отцепной, Программирование 2 часа, Английский 1 час"<<endl;
        break;
    case 5:
        cout<<"\tПятница"<<endl;
        cout<<"Выходной день, подготовка к дневной смене: готовка. Финский язык 1 час + Программирование 2 часа"<<endl;
        break;
    case 6:
        cout<<"\tСуббота"<<endl;
        cout<<"Основная работа в день"<<endl;
        break;
    case 7:
        cout<<"\tВоскресенье"<<endl;
        cout<<"Программирование 2 часа, Финский 1 час, затем ночная смена"<<endl;
        break;
    default:
        cout<<"Выберите правильный номер недели (От 1 до 7)"<<endl;
    }
    if (answer>=1&&answer<=7)
        var=false;}
        while (var);

    system("pause");
    return 0;
}
