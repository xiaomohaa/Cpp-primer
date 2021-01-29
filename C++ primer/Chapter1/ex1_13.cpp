
#include <iostream>

using namespace std;

// ex1_9
void ex1_9()
{
	int result = 0;
	
	for(int i = 50; i <= 100;i++)
	{
		result += i;
	}
	cout << "50到100之间所有整数和为：" << result << endl;
}

// ex1_10
void ex1_10()
{
	for (int i = 10; i >= 0; i--)
	{
		cout << i << ' ';
	}
	cout << endl;
}

// ex1_11_
void ex1_11()
{
	int val = 0, num = 0;
	cout << "请输入两个整数：";
	cin >> val >> num;
	if(val > num)
	{
		int temp = num;
		num = val;
		val = temp;
	}
	cout << val << "到" << num << "之间的整数有：";
	for( ; val <= num; val++)
	{
		cout << val << ' ';
	}
	cout << endl;
}


int main()
{
	cout << "for循环重做ex1_9 !" << endl;
	ex1_9();
	cout << endl;
	cout << "for循环重做ex1_10 !" << endl;
	ex1_10();
	cout << endl;
	cout << "for循环重做ex1_11 !" << endl;
	ex1_11();
	
	return 0;
}