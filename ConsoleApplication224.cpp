#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b;
	int c;
	setlocale(0, "");
	cout << "Введите первое число: " << endl;
	cin >> a;
	cout << "Введите второе число: " << endl;
	cin >> b;
	cout << "Выберите математическую операцию: " << endl <<
		"1. Сложение" << endl <<
		"2. Вычитание" << endl <<
		"3. Деление" << endl <<
		"4. Умножение" << endl <<
		"5. Возведение в степень" << endl <<
		"6. Вычисление логарифма по основанию 2" << endl <<
		"7. Вычисление квадратного корня из числа" << endl <<
		"8. Сравнение чисел" << endl;
	cout << "Введите пункт меню: " << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "Результат сложения равен " << a + b << endl;
		break;
	case 2:
		cout << "Результат вычитания равен " << a - b << endl;
		break;
	case 3:
		cout << "Результат деления равен " << (double)a / b << endl;
		break;
	case 4:
		cout << "Результат умножения равен " << a * b << endl;
		break;
	case 5:
		cout << "Результат возведения числа в степень равен " << pow(a, b) << endl;
		break;
	case 6:
		cout << "Результат вычисления логарифма по основанию 2 равен " << (double)log2(a) << endl;
		break;
	case 7:
		cout << "Результат вычисления квадратного корня из числа равен " << (double)sqrt(a) << endl;
		break;
	case 8:
		if (a > b)
		{
			cout << "Число " << a << " больше числа " << b << endl;
		}
		else if (a == b)
		{
			cout << "Число " << a << " равно числу " << b << endl;
		}
		else if (a < b)
		{
			cout << "Число " << a << " меньше числа " << b << endl;
		}
		break;
	default:
		cout << "!!! Ошибка, такого пункта в меню НЕТ !!!" << endl;
		break;
	}
	return 0;
}
