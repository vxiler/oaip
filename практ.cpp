



#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double num1, num2;
    char op;

  
    cout << "Выберите операцию: ";
    cin >> op;

    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    if (op == '+') {
        cout << "Результат: " << num1 << " + " << num2 << " = " << num1 + num2;
    }
    else if (op == '-') {
        cout << "Результат: " << num1 << " - " << num2 << " = " << num1 - num2;
    }
    else if (op == '*') {
        cout << "Результат: " << num1 << " * " << num2 << " = " << num1 * num2;
    }
    else if (op == '/') {
        if (num2 == 0) cout << "Делить на 0 нельзя!";
        else cout << "Результат: " << num1 << " / " << num2 << " = " << num1 / num2;
    }
    else if (op == '%') {
        if ((int)num2 == 0) cout << "Делить на 0 нельзя!";
        else cout << "Результат: " << (int)num1 << " % " << (int)num2 << " = " << ((int)num1 % (int)num2);
    }
    else {
        cout << "Неверная операция!";
    }

    return 0;
}