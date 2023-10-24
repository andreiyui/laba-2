#include <iostream>
#include <vector>
using namespace std;
int main() {
    setlocale(0, "");
    int numVisitors;
   cout << "Введите количество посетителей спортзала за день: ";
    cin >> numVisitors;

    vector<int> ages(numVisitors);
    int age;

    for (int i = 0; i < numVisitors; ++i) {
       cout << "Введите возраст посетителя " << (i + 1) << ": ";
        cin >> age;
        ages[i] = age;
    }

    int minAge = ages[0];
    int maxAge = ages[0];

    int totalAge = ages[0];

    for (int i = 1; i < numVisitors; ++i) {
        if (ages[i] < minAge) {
            minAge = ages[i];
        }
        if (ages[i] > maxAge) {
            maxAge = ages[i];
        }
        totalAge += ages[i];
    }

    double averageAge = static_cast<double>(totalAge) / numVisitors;

    cout << "Самый молодой посетитель: " << minAge << " лет\n";
    cout << "Самый старший посетитель: " << maxAge << " лет\n";
    cout << "Средний возраст посетителей: " << averageAge << " лет\n";

    return 0;
}

