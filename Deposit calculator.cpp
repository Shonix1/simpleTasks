#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");

float sumDeposit = 0; // сумма депозита
int amountMonth = 0; // количество мес€цев
float profit = 0; // прибыль
float annualRate = 5; // п€ть процентов годовых
int daysInYear = 365;
int daysInMonth = 30;

cout << "¬ведите сумму депозита в долларах: ";
	cin >> sumDeposit;
cout << "¬ведите количество мес€цев: ";
	cin >> amountMonth;

cout << "\n–асчет\n";
cout << "=======================================\n";
cout << "ѕроценты в мес€ц: ";
// проводим расчет по формуле и записываем в переменную profit
profit = sumDeposit * (annualRate / 100)  / daysInYear * daysInMonth;

cout << sumDeposit << " * " << annualRate << "%  / " << daysInYear
	 << " * " << daysInMonth << " = " << profit << " $" << endl;

cout << "ѕроцентна€ выручка за весь срок: ";
// умножаем % за 1 мес€ц на весь срок депозита и записываем в profit
profit *= amountMonth;
cout << profit << " $"  << endl;

cout << "ќбща€ сумма к концу срока: "
	 << sumDeposit + profit  << " $";
cout << endl << endl;
system("pause");
return 0;
}
