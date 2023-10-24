#include <iostream>
#include <string>
using namespace std;
int main() {
    setlocale(0, "");
    int dayNumber;

    cout << "Введите порядковый номер дня недели (1-7): ";
    cin >> dayNumber;

    switch (dayNumber) {
    case 1:
        cout << "Понедельник: учусь" << endl;
        break;
    case 2:
        cout << "Вторник: думаю" << endl;
        break;
    case 3:
        cout << "Среда: зарабатывю миллеоны" << endl;
        break;
    case 4:
        cout << "Четверг: Поход на концерт кишлака" << endl;
        break;
    case 5:
        cout << "Пятница: Ужин с дедушкой" << endl;
        break;
    case 6:
        cout << "Суббота: Отдых от денег" << endl;
        break;
    case 7:
        cout << "Воскресенье: Поездка на шашлык с арманом" << endl;
        break;
    default:
        cout << "Неверный номер дня недели. Введите число от 1 до 7." << endl;
        break;
    }

    return 0;
}