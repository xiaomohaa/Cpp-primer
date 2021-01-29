
/*
 *Write a program that uses a while to sum the numbers from 50 to 100.
 */

#include <iostream>

using namespace std;

int main()
{
	int val = 50, result = 0;

	while (val <= 100)
	{
		result += val;
		val++;
	}
		
	cout << "从50到100的整数和是：" << result << endl;
	
	return 0;
}