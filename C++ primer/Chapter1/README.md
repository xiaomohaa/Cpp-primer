## Chapter 1.Getting Started

### Exercise 1.3
* Write a program to print Hello, World on the standard output.

```
#include <iostream>

using namespace std;

int main(void)
{
	cout << "Hello,World" << endl;

	return 0;
}
```

### Exercise 1.4
* Our program used the addition operator, +, to add twonumbers. Write a program that uses the multiplication operator, *, to print the product instead.

```
#include <iostream>

using namespace std;

int main(void)
{
	cout << "���������������Կո�����";

	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;

	cout << "�����˻�Ϊ��" << num1 * num2 << endl;

	return 0;
}
```

### Exercise 1.5
* We wrote the output in one large statement. Rewrite theprogram to use a separate statement to print each operand.

```
#include <iostream>

using namespace std;

int main(void)
{
	cout << "���������������Կո�����";

	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;

	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

	return 0;
}
```

### Exercise 1.6
* Explain whether the following program fragment is legal.If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?

```
std::cout << "The sum of " << v1;
			<< " and " << v2;
			<< " is " << v1 + v2 << std::endl;
```

�����д�����ʹ��"<<"��ʱ��ǰ����Ҫ�в�������

��Ϊ�����������ɡ�

```
std::cout << "The sum of " << v1	<< " and " << v2	<< " is " << v1 + v2 << std::endl;
```

### Exercise 1.7
* Compile a program that has incorrectly nested comments.

������ǰ������µķ�ʽдע�ͻ�����
```
/*
 *	��һ������������ע������
 *	һ��������Ƕ��   /**/   ֮������ݶ�����Ϊ�Ǵ���
 */

/*
 * �������м�Ƕ�� // ������ȷ�ģ���Ӱ��ע������
 */
```

### Exercise 1.8
* Indicate which, if any, of the following output statements are legal:

```
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```
* After you��ve predicted what will happen, test your answers by compiling a program with each of these statements. Correct any errors you encounter.

```
#include <iostream>

int main(void)
{
	std::cout << "/*";					// ��ӡ /*
	std::cout << "*/";					// ��ӡ */
///	std::cout << /* "*/" */;			// ��������Ϊ /* "*/ ��ǰһ��˫���Ÿ�ע�͵���
	std::cout << /* "*/" /* "/*" */;	// ��ӡ /* 
	
	return 0;
}
```

### Exercise 1.9
* Write a program that uses a while to sum the numbers from 50 to 100.

```
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
``` 

### Exercise 1.10
* In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.

```
#include <iostream>

int main()
{
	int val = 10;
	
	while (val >= 0)
	{
		std::cout << val << ' ';
		val--;
	}
	std::cout << std::endl;
	
	return 0;
}
```

### Exercise 1.11
* Write a program that prompts the user for two integers.Print each number in the range specified by those two integers.

```
#include <iostream>
using namespace std;

int main()
{
	int val, num;
	
	cout << "����������������";
	cin >> val >> num;

	if(val > num)
	{
		int temp = num;
		num = val;
		val = temp;
	}

	cout << val << "��" << num << "֮��������У�" << endl;
	
	while(val <= num)
	{
		cout << val << ' ';
		val++;
	}
	cout << endl;
	
	return 0;
}
```

### Exercise 1.12
* What does the following for loop do? What is the final valueof sum?

```
int sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i;
```

����-100��100֮�����������ͣ����ս����0.

### Exercise 1.13
* Rewrite the exercises from �� 1.4.1 (p. 13) using for loops.

```
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
```

```
// ex1_10
void ex1_10()
{
	for (int i = 10; i >= 0; i--)
	{
		cout << i << ' ';
	}
	cout << endl;
}
```

```
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
```



### Exercise 1.14
* Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?


### Exercise 1.15
* Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.










































