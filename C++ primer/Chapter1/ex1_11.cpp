
/*
 * Write a program that prompts the user for two integers.Print each number in the range specified by those two integers.
 */

#include <iostream>
using namespace std;

int main()
{
	int val, num;
	
	cout << "请输入两个整数：";
	cin >> val >> num;

	if(val > num)
	{
		int temp = num;
		num = val;
		val = temp;
	}

	cout << val << "到" << num << "之间的整数有：" << endl;
	
	while(val <= num)
	{
		cout << val << ' ';
		val++;
	}
	cout << endl;
	
	return 0;
}