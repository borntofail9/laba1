#include <iostream>
using namespace std;

int main()
{
    int i; // счетчик цикла
    int sum = 0; // сумма чисел от 1 до 1000.
    setlocale(0, "");
    for (i = 1; i <= 1000; i++) // задаем начальное значение 1, конечное 1000 и задаем шаг цикла - 1.
    {
        sum = sum + i;
    }
    cout << "Сумма чисел от 1 до 1000 = " << sum << endl;         
    return 0;
}