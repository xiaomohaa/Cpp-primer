
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
	cout << "50��100֮������������Ϊ��" << result << endl;
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
	cout << "����������������";
	cin >> val >> num;
	if(val > num)
	{
		int temp = num;
		num = val;
		val = temp;
	}
	cout << val << "��" << num << "֮��������У�";
	for( ; val <= num; val++)
	{
		cout << val << ' ';
	}
	cout << endl;
}


int main()
{
	cout << "forѭ������ex1_9 !" << endl;
	ex1_9();
	cout << endl;
	cout << "forѭ������ex1_10 !" << endl;
	ex1_10();
	cout << endl;
	cout << "forѭ������ex1_11 !" << endl;
	ex1_11();
	
	return 0;
}