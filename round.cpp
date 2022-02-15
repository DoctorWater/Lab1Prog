#include <iostream>
#include "lab.h"

using namespace std;
namespace lab {
    void round() {
        float a = 0;
        int choice;
        cout << "Пожалуйста, выберите, как вы хотите отбросить целую часть числа: с помощью указателей(1) или ссылок(2)"
             << endl;
        cin >> choice;
        cout << "Пожалуйста, введите число" << endl;
        cin >> a;
        switch (choice) {
            case 1:
                roundP(&a);
                cout << "Вот результат процедуры: " << a << endl;
                break;
            case 2:
                roundL(a);
                cout << "Вот результат процедуры: " << a << endl;
                break;
            default:
                cout << "Проверьте корректность ввода!" << endl;
        }
    }
}

