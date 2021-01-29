
/*
 * 
 */

#include <iostream>

int main()
{
	int sum = 0;

	// 计算-100到100之间所有整数和。
	for (int i = -100; i <= 100; ++i)
		sum += i;
	
	std::cout << sum << std::endl;
	
	return 0;
}
