#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y, sa;
	cout << "������� ����� X � Y:\n";
	cin >> x >> y;
	int* px = &x;
	int* py = &y;
	sa = (*px + *py) / 2;
	cout << "������� �������������� �������� X � Y = " << sa << endl;

	return 0;
}