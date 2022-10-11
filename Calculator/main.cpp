#include <iostream>
using namespace std;

void main() {
	setlocale(0, "");
	double num1, num2;
	char sign;
	cout << "\n\tВведите выражение: ";  cin >> num1 >> sign >> num2;
	if (sign == '+')
	{
		cout << "\t" << num1 << " + " << num2 << " = " << num1 + num2;
	}
	if (sign == '-')
	{
		cout << "\t" << num1 << " - " << num2 << " = " << num1 - num2;
	}
	if (sign == '*')
	{
		cout << "\t" << num1 << " * " << num2 << " = " << num1 * num2;
	}
	if (sign == '/' && num2 != 0)
	{
		cout << "\t" << num1 << " / " << num2 << " = " << num1 / num2;
	}
	if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
	{
		cout << "\tЛибо я не умею вычислять такие выражения, либо выражение неверно.";
	}
	if (sign == '/' && num2 == 0)
	{
		cout << "\tРазделить на ноль нельзя!";
	}
}