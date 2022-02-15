#include <iostream>
#include "Windows.h"
#include "lab.h"

using namespace std;
using namespace lab;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a, b, choice;
    cout << "Пожалуйста, введите значения через Enter:" << endl;
    cin >> a;
    cin >> b;
    cout << "Пожалуйста, выберите, как вы хотите сложить числа: с помощью указателей(1) или ссылок(2)" << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            addP(&a, &b);
            cout << a << endl;
            break;
        case 2:
           addL(a,b);
            cout << a << endl;
            break;
        default:
            cout<<"Проверьте корректность ввода!"<<endl;
    }
    return 0;
}
