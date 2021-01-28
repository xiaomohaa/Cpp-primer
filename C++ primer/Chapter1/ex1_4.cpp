
/*
Our program used the addition operator, +, to add twonumbers. Write a program that uses the multiplication operator, *, to print the product instead.
*/

#include <iostream>

using namespace std;

int main(void)
{
	cout << "请输入两个数，以空格间隔：";

	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;

	cout << "两数乘积为：" << num1 * num2 << endl;

	return 0;
}