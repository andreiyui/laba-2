#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, "");
    int finger;
    cout << "Введите номер пальца (Счет начинается с большого пальца: ";
    cin >> finger;
    switch (finger)
    {
    case 1:
        cout << " большой палец";
        break;
    case 2:
        cout << "  указательный палец";
        break;
    case 3:
        cout << " средний палец";
        break;
    case 4:
        cout << "  безимянный палец";
        break;
    case 5:
        cout << "  мизинец ";
        break;
    default:
        cout << "НЕ ВЕРНОЕ ЗНАЧЕНИЕ ";
        break;
    }

}