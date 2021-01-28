

/*
We wrote the output in one large statement. Rewrite theprogram to use a separate statement to print each operand.
*/


#include <iostream>

using namespace std;

int main(void)
{
	cout << "请输入两个数，以空格间隔：";

	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;

	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

	return 0;
}