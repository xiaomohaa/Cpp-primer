
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
		
	cout << "��50��100���������ǣ�" << result << endl;
	
	return 0;
}