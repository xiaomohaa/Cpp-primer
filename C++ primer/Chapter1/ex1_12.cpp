
/*
 * 
 */

#include <iostream>

int main()
{
	int sum = 0;

	// ����-100��100֮�����������͡�
	for (int i = -100; i <= 100; ++i)
		sum += i;
	
	std::cout << sum << std::endl;
	
	return 0;
}
