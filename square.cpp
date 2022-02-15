#include <iostream>
#include "lab.h"

using namespace std;
namespace lab {
    void square() {
        int choice;
        float a;
        Square square1;
        Vector vector;
        cout << "Пожалуйста, выберите, как вы хотите передвинуть квадрат: с помощью указателей(1) или ссылок(2)"
             << endl;
        cin >> choice;
        cout << "Пожалуйста, введите координаты вершин квадрата через Enter в формате 'Ax Ay  ENTER Bx By'" << endl;
        cin >> square1.a.x >> square1.a.y;
        cin >> square1.b.x >> square1.b.y;
        cin >> square1.c.x >> square1.c.y;
        cin >> square1.d.x >> square1.d.y;
        cout << "Пожалуйста, введите координаты вектора через Enter" << endl;
        cin >> vector.x;
        cin >> vector.y;
        switch (choice) {
            case 1:
                squareP(&square1, &vector);
                square1.toString();
                break;
            case 2:
                squareL(square1, vector);
                square1.toString();
                break;
            default:
                cout << "Проверьте корректность ввода!" << endl;
        }
    }
}



