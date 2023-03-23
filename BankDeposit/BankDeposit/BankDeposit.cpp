#include<iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "Rus");
    int change;
    bool run = true;
    float deposit, percent, outcome, increase;
    while (run)
    {
        int month = 0;
        cout << "Начальная сумма: ";
        cin >> deposit;
        cout << "Конечная сумма: ";
        cin >> outcome;
        cout << endl << "Меню выбора:" << endl << "1 - Любая ставка [расчет]: " << endl << "2 - Фиксированная процентная ставка банка: " << endl;
        cin >> change;
        switch (change)
        {
        case 1:
            run = true;
            if (deposit >= outcome)
            {
                cout << endl << "Неверные исходные данные: начальная сумма больше конечной" << endl << endl;
                break;
            }
            cout << "Введите процентную ставку: " << endl;
            cin >> percent;
            while (deposit <= outcome)
            {
                increase = (deposit * percent / 100) / 12;
                cout << endl << "Месяц    " << month << "    Деньги    " << deposit;
                deposit += increase;
                ++month;
            }
            cout << endl << endl << "Вы получите " << outcome << "р. через " << month << " месяцев" << endl << endl;
            break;
        default:
            run = true;
            if (1 < change < 5)
            {
                cout << "Процентная ставка выбрана не верно" << endl;
            }
            cout << endl << endl;
            break;
        }
    }
    system("pause");
}