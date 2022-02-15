#include <iostream>
#include "Windows.h"
#include "lab.h"

using namespace std;
using namespace lab;

int main() {
    srand (static_cast <unsigned> (time(0)));
    SetConsoleOutputCP(CP_UTF8);
    int choice;
    cout << "Вы желаете сами ввести значения(1) или запустить демонстрацию(2)?" << endl;
    cin >> choice;
    if (choice == 1) {
        cout << "Пожалуйста, выберите, какую процедуру вы хотите исполнить, и введите ее номер:" << endl;
        cout << "1) Увеличение значения переменной на заданную величину" << endl;
        cout << "2) Отбрасывание от вещественного числа его целой части" << endl;
        cout << "3) Изменение комплексной переменной на комплексно сопряженную с ней" << endl;
        cout << "4) Передвижение квадрата на заданный вектор" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                round();
                break;
            case 3:
                complex();
                break;
            case 4:
                square();
                break;
            default:
                cout << "Проверьте корректность ввода!" << endl;
        }
    } else if (choice == 2) {
        demonstrate();
    } else
        cout << "Проверьте корректность ввода!" << endl;
    return 0;
}
