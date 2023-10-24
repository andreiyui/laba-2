#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int num1, num2;
    cout << "Введите первое однозначное число: ";
    cin >> num1;
    cout << "Введите второе однозначное число: ";
    cin >> num2;

    int correctAnswer = num1 * num2;

    int userAnswer;
    cout << "Сколько будет " << num1 << " умножить на " << num2 << "? ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Правильно!" << endl;
    }
    else {
        cout << "Неправильно. Правильный ответ: " << correctAnswer << endl;
    }

    return 0;
}