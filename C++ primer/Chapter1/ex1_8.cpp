// ex1_8

#include <iostream>

int main(void)
{
	std::cout << "/*";					// 打印 /*
	std::cout << "*/";					// 打印 */
///	std::cout << /* "*/" */;			// 报错！因为 /* "*/ 将前一个双引号给注释掉了
	std::cout << /* "*/" /* "/*" */;	// 打印 /* 
	
	return 0;
}

