#include <iostream>
#include "lab.h"

using namespace std;
namespace lab {
    void add() {
        int a,b, choice;
        std::cout << "Пожалуйста, выберите, как вы хотите сложить числа: с помощью указателей(1) или ссылок(2)" << endl;
        cin >> choice;
        cout << "Пожалуйста, введите числа через Enter"<<endl;
        cin >> a;
        cin >> b;
        switch (choice) {
            case 1:
                addP(&a, &b);
                cout << "Вот результат сложения: "<< a << endl;
                break;
            case 2:
                addL(a, b);
                cout << "Вот результат сложения: "<< a << endl;
                break;
            default:
                cout << "Проверьте корректность ввода!" << endl;
        }
    }
}