// ex1_8

#include <iostream>

int main(void)
{
	std::cout << "/*";					// ��ӡ /*
	std::cout << "*/";					// ��ӡ */
///	std::cout << /* "*/" */;			// ������Ϊ /* "*/ ��ǰһ��˫���Ÿ�ע�͵���
	std::cout << /* "*/" /* "/*" */;	// ��ӡ /* 
	
	return 0;
}

