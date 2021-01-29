
/*
 * Exercise 1.16: Write your own version of a program that prints the sum of a set of integers read from cin.
 */

#include <iostream>

int main()
{
	int result = 0, num = 0;
	std::cout << "请输入一些整数：";
	
	//while (std::cin >> num)
	//{
	//	result += num;
	//}

	for (; std::cin >> num; )
		result += num;

	std::cout << std::endl << "相加的结果是：" << result << std::endl;
	
	return 0;
}