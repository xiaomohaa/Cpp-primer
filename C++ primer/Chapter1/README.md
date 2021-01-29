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
	cout << "请输入两个数，以空格间隔：";

	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;

	cout << "两数乘积为：" << num1 * num2 << endl;

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
	cout << "请输入两个数，以空格间隔：";

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

这里有错误。在使用"<<"的时候，前面需要有操作对象。

改为下面这样即可。

```
std::cout << "The sum of " << v1	<< " and " << v2	<< " is " << v1 + v2 << std::endl;
```

### Exercise 1.7
* Compile a program that has incorrectly nested comments.

如果我们按照以下的方式写注释会怎样
```
/*
 *	这一部分是正常的注释内容
 *	一旦在里面嵌套   /**/   之后的内容都被认为是代码
 */

/*
 * 但是在中间嵌套 // 还是正确的，不影响注释内容
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
* After you’ve predicted what will happen, test your answers by compiling a program with each of these statements. Correct any errors you encounter.

```
#include <iostream>

int main(void)
{
	std::cout << "/*";					// 打印 /*
	std::cout << "*/";					// 打印 */
///	std::cout << /* "*/" */;			// 报错！因为 /* "*/ 将前一个双引号给注释掉了
	std::cout << /* "*/" /* "/*" */;	// 打印 /* 
	
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
		
	cout << "从50到100的整数和是：" << result << endl;
	
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
	
	cout << "请输入两个整数：";
	cin >> val >> num;

	if(val > num)
	{
		int temp = num;
		num = val;
		val = temp;
	}

	cout << val << "到" << num << "之间的整数有：" << endl;
	
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

计算-100到100之间所有整数和，最终结果是0.

### Exercise 1.13
* Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

```
// ex1_9
void ex1_9()
{
	int result = 0;
	
	for(int i = 50; i <= 100;i++)
	{
		result += i;
	}
	cout << "50到100之间所有整数和为：" << result << endl;
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
	cout << "请输入两个整数：";
	cin >> val >> num;
	if(val > num)
	{
		int temp = num;
		num = val;
		val = temp;
	}
	cout << val << "到" << num << "之间的整数有：";
	for( ; val <= num; val++)
	{
		cout << val << ' ';
	}
	cout << endl;
}
```

### Exercise 1.14
* Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?

[这里借鉴一个相似的问题](https://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming)

### Exercise 1.15
* Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.

```
// error: missing ) in parameter list for main
int main ( 
{
	// error: used colon, not a semicolon, after endl
	std::cout << "Read each file." << std::endl:
	// error: missing quotes around string literal
	std::cout << Update master. << std::endl;
	// error: second output operator is missing
	std::cout << "Write new master." std::endl;
	// error: missing ; on return statement
	return 0
}
```

```
#include <iostream>
int main()
{
	int v1 = 0, v2 = 0;
	std::cin >> v >> v2; // error: uses "v" not "v1"
	// error: cout not defined; should be std::cout
	cout << v1 + v2 << std::endl;
	return 0;
}
```

### Exercise 1.16
* Write your own version of a program that prints the sum of a set of integers read from cin.

> 注意：本例的程序需要手动输入文件结束符。
> * windows 操作系统输入 Ctrl+Z
> * MAC OS X 和 UNIX 系统输入 Ctrl+D

while实现
```
#include <iostream>

int main()
{
	int result = 0, num = 0;
	std::cout << "请输入一些整数：";
	while (std::cin >> num)
	{
		result += num;
	}

	std::cout << std::endl << "相加的结果是：" << result << std::endl;
	
	return 0;
}
```

for实现
```
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
```

### Exercise 1.17
* What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?

如果输入的值都是相等的，会输出最高数值一共输入了多少次。  
如果没有重复的值,在按下Enter之后，会输出除最后一个输入数值之外的所有数据，并且每个数值单独一行。

### Exercise 1.18
* Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.

```
#include <iostream>

int main()
{
	int currVal = 0, val = 0;
	
	if (std::cin >> currVal)
	{
		int cnt = 1; 
		while (std::cin >> val) 
		{ 
			if (val == currVal) 
				++cnt; 
			else 
			{ 
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val; 
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}
	return 0;
}
```

### Exercise 1.19
* Revise the program you wrote for the exercises in § 1.4.1 (p.13) that printed a range of numbers so that it handles input in which the first number is smaller than the second.

由于我当时在写那个题目的时候已经考虑最高问题。就直接把code放过来了。  
只需要加一个if判断语句，在第一个数小于第二个数的时候，将两个数值交换即可。

```
void ex1_11()
{
	int val = 0, num = 0;
	cout << "请输入两个整数：";
	cin >> val >> num;
	if(val < num)
	{
		int temp = num;
		num = val;
		val = temp;
	}
	cout << val << "到" << num << "之间的整数有：";
	for( ; val >= num; val--)
	{
		cout << val << ' ';
	}
	cout << endl;
}
```

### Exercise 1.20
* http://www.informit.com/title/032174113 contains a copy of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.

在本题测试案例中，由于头文件中的类定义原因，在输入变量的时候请按照以下格式输入。
> ISBN 数量 单价  

输出结果为：
> ISBN 数量 总价 单价

```
#include <iostream>
#include "../Include/Sales_item.h"

using namespace std;

int main()
{
	Sales_item item;

	while (cin >> item)
		cout << item << endl;
	
	return 0;
}
```


### Exercise 1.21
* Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.

```
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
```

### Exercise 1.22
* Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.

```

```















































