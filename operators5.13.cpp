﻿// ConsoleApplication24.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <math.h>
#define  _USE_MATH_DEFINES 
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, h, x;
	cout << "Введите границы отрезка" << endl;
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "Введите шаг" << endl;
	cout << "h= "; cin >> h;
	int i;
	for (i = 1; x = a; x <= b, x += h, i++, cout << endl) {
		cout << i;
		cout << setw(6) << right << x;
		if ((x > M_PI ))
			cout << setw(6) << right << 1/sin(x) ;
		else if  (( x == M_PI) || (x == 0))
			cout << setw(6) << right << "  не определена ";
		else if 
			cout << setw(6) << right << tan(x);
	 }
	system("pause");

}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
