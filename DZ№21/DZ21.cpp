#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y, sa;
	cout << "Введите число X и Y:\n";
	cin >> x >> y;
	int* px = &x;
	int* py = &y;
	sa = (*px + *py) / 2;
	cout << "Среднее арифметическое значений X и Y = " << sa << endl;

	return 0;
}