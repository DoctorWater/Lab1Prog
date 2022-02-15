#include <iostream>
#include "lab.h"

using namespace std;
namespace lab{
        void complex(){
            int choice;
            ComplexNumber a{};
            std::cout << "Пожалуйста, выберите, как вы хотите изменить число: с помощью указателей(1) или ссылок(2)" << endl;
            cin >> choice;
            cout << "Пожалуйста, части числа через Enter: сначала вещественную часть, затем -- мнимую"<<endl;
            cin >> a.realPart;
            cin >> a.imaginaryPart;
            switch (choice) {
                case 1:
                    complexP(&a);
                    cout << "Вот результат:"<< a.realPart<<"+("<<a.imaginaryPart<<"i)"<<endl;
                    break;
                case 2:
                    complexL(a);
                    cout << "Вот результат:"<< a.realPart<<"+("<<a.imaginaryPart<<"i)"<<endl;
                    break;
                default:
                    cout << "Проверьте корректность ввода!" << endl;
            }
        }
}

