
#include <iostream>
#include "../Include/Sales_item.h"

using namespace std;

int main()
{
	Sales_item goal;

	// 输入需要查询的ISBN
	cin >> goal;	
	Sales_item item;
	while(cin >> item)
	{
		if(goal.isbn() == item.isbn())
		{
			goal += item;
		}
	}
	cout << goal << endl;
	
	return 0;
}