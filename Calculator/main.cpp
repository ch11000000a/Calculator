#include <iostream>
using namespace std;

void main() {
	setlocale(0, "");
	double num1, num2;
	char sign;
	cout << "\n\t������� ���������: ";  cin >> num1 >> sign >> num2;
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
		cout << "\t���� � �� ���� ��������� ����� ���������, ���� ��������� �������.";
	}
	if (sign == '/' && num2 == 0)
	{
		cout << "\t��������� �� ���� ������!";
	}
}