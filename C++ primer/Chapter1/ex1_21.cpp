
#include <iostream>
#include "../Include/Sales_item.h"

using namespace std;

int main()
{
	Sales_item item1, item2;

	// 输入两个对象内容
	cin >> item1 >> item2;

	cout << item1 + item2 << endl;
	
	return 0;
}