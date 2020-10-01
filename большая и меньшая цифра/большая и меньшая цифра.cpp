// большая и меньшая цифра.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <windows.h>
#include <iostream>
using namespace std;

int num;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do {
		cout << "Введите число, которое не превышает 99: ";
		cin >> num;
		if (num > 99) { cout << "Почему вы не соблюдаете правила? :с\n\n"; }
	} while (num > 99);

	if ((num / 10) > (num % 10))
	{
		cout << num / 10 << " - большее число" << endl;
		cout << num % 10 << " - меньшее число" << endl;
	}
	else if ((num / 10) < (num % 10))
	{
		cout << num % 10 << " - большее число" << endl;
		cout << num / 10 << " - меньшее число" << endl;
	}
	else {
		cout << num / 10 << " и " << num % 10 << " равны" << endl;
	}
	cout << endl;
	return 0;
}
