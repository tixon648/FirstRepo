// Test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пробуем внести изменения в репозиторий Git

// Создание таблицы конвертирования единиц измерения с использованием цикла for и использования if
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");// Подключение русского языка;
    double SeaMile,KMeters;
    int counter = 0;
    for (KMeters = 1.0; KMeters <= 50.0; KMeters++) {
        SeaMile = KMeters / 1.852;
        cout << "Километров:  " << KMeters <<"\t\t"<< "Морских миль: " << SeaMile << "\n";
        counter++;
        if (counter == 5) {
            cout << "\n";
            counter = 0;
        }
        cout << "Программа выполнена""\n";
    }
    return 0;
}

