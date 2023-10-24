#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	char naznach;
	cout << "Программа расчета времени в пути \n" << endl;
	cout << "Выберите пункт назначения: \n" << endl;
	cout << "------------------------------------- \n";
	cout << " А \n B \n C\n D \n E\n" << endl;
	cin >> naznach;
	switch (naznach) {
	case 'a':
	case 'A':
		cout <<  "ехать  5 минуты!\n";
		break;

	case 'b':
	case 'B':
		cout << " ехать  6 минут! \n";
		break;
	case 'c':
	case 'C':
		cout << " ехать  21 минуту! \n";
		break;
	case 'd':
	case 'D':
		cout << " ехать  34 минут! \n";
		break;
	case 'e':
	case 'E':
		cout << " ехать  29 минут! \n";
		break;
	}



}