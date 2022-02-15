#include <iostream>
#include "lab.h"
#include <random>
#include <iomanip>

using namespace std;
namespace lab {
    void demonstrate() {
        random_device rd;
        default_random_engine eng(rd());
        uniform_real_distribution<> distr(-100, 100);
        int a = -2000 + rand() % 2000, b = -2000 + rand() % 2000, tmp = a, tmp2;
        addP(&a, &b);
        tmp2 = a;
        a = tmp;
        addL(a, b);
        cout << "Вывод сложения " << tmp << " и " << b << " с помощью указателей: " << tmp2 << " и ссылок: " << a
             << endl;
        float r = distr(eng), tmp3 = r, tmp4;
        roundP(&r);
        tmp4 = r;
        r = tmp3;
        roundL(r);
        cout << "У числа " <<setprecision(5)<<tmp3 << " отброшена целая часть при помощи указателей: "<<setprecision(3) << tmp4 << " и ссылок: "<<setprecision(3) << r
             << endl;
        ComplexNumber number;
        number.realPart = distr(eng);
        number.imaginaryPart = distr(eng);
        tmp3 = number.realPart;
        tmp4 = number.imaginaryPart;
        cout << "Исходное комплексное число: ";
        number.toString();
        cout << endl;
        cout << "Комплексно сопряженное к числу (при помощи указателей): ";
        complexP(&number);
        number.toString();
        cout << endl;
        cout << "Комплексно сопряженное к числу (при помощи ссылок): ";
        number.realPart = tmp3;
        number.imaginaryPart = tmp4;
        complexL(number);
        number.toString();
        cout << endl;
        cout << "Квадрат с координатами вершин (1,1) (1,2) (2,1) (2,2) переместили на вектор ";
        Vector vector(-10 + rand() % 10, -10 + rand() % 10);
        vector.toString();
        Square square1(1, 1, 1, 2, 2, 1, 2, 2), sqTmp = square1;
        squareP(&square1, &vector);
        cout << "Результат через указатели: ";
        square1.toString();
        cout << endl;
        cout << "Результат через ссылки: ";
        square1 = sqTmp;
        squareL(square1, vector);
        square1.toString();
    }
}