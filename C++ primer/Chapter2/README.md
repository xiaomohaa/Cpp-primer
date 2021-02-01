
## Chapter 2. Variables and Basic Types

### Exercise 2.1
* What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

**整型**  
C++ 语言规定一个int至少和一个short一样大，一个long至少和一个int一样大，一个long long至少和一个long一样大。其中，数据类型long long是在C++11中新定义的。

**浮点型**  
C++标准指定了一个浮点数有效位数的最小值。通常，float以1个字(32比特)来表示，double以2个字(64比特)来表示，long double以3或4个字(96或128比特)来表示。

**带符号类型和无符号类型**  
除去布尔型和扩展的字符型之外，其他整型可以划分为带符号的(signed)和无符号的(unsigned) 两种。带符号类型可以表示正数、负数或0，无符号类型则仅能表示大于等于0的值。  
类型int、short、long和long long都是带符号的，通过在这些类型名前添加unsigned就可以得到无符号类型。
 
**如何选择类型**
* 当明确知晓数值不可能为负时，选用无符号类型。  
* 使用int 执行整数运算。在实际应用中，short常常显得太小而long一般和int有一样的尺寸。如果你的数值超过了int的表示范围，选用long long。  
* 在算术表达式中不要使用 char或bool, 只有在存放字符或布尔值时才使用它们。因为类型char在一些机器上是有符号的，而在另一些机器上又是无符号的，所以如果使用char进行运算特别容易出问题。如果你需要使用一个不大的整数，那么明确指定它的类型是signed char或者unsigned char。
* 执行浮点数运算选用double,这是因为float通常精度不够而且双精度浮点数和单精度浮点数的计算代价相差无几。事实上，对于某些机器来说，双精度运算甚至比单精度还快。long double 提供的精度在一般情况下是没有必要的，况且它带来的运行时消耗也不容忽视。

### Exercise 2.2
* To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

选择浮点型float或者双浮点型double。

因为在进行计算的时候要涉及小数的运算。

### Exercise 2.3
* What output will the following code produce?

```
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

变量u和u2定义的是无符号的int型数据，表示范围为0~4,294,967,296

变量i和i2定义的是有符号的int型数据，表示范围为-2,147,483,648~2,147,483,647
```
32
4,294,967,264
32
-32
0
0
```

### Exercise 2.4
* Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

```
#include <iostream>

using namespace std;

int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
	
	return 0;
}
```

### Exercise 2.5
* Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
> (a) 'a', L'a', "a", L"a"  
> (b) 10, 10u, 10L, 10uL, 012, 0xC  
> (c) 3.14, 3.14f, 3.14L  
> (d) 10, 10u, 10., 10e-2  

(a) 字符a，宽字符a，字符串a，宽字符串a  
(b) int型10，unsigned int型10，long型10，unsigned long型10，八进制10，十六进制10  
(c) double型3.14，float型3.14，long double型3.14  
(d) int型10，unsigned int型10，double型10.0，double型0.1

### Exercise 2.6
* What, if any, are the differences between the following definitions:
```
int month = 9, day = 7;
int month = 09, day = 07;
```

因为以0开头的整数代表八进制数。  
所以第一行定义的month和day都是十进制的。  
第二行定义的month是会报错的，因为9是八进制中无效的数字，然而day的定义是有效的，定义为八进制的07.

### Exercise 2.7
* What values do these literals represent? What type does each have?
> (a) "Who goes with F\145rgus?\012"  
> (b) 3.14e1L  
> (c) 1024f  
> (d) 3.14L

在(a)中，存在转义字符'\'，在第一个转义字符为‘\145’，对应ASCII中的‘e’，第二个转义字符‘\012’,对应ASCII中的换行。  
(a) "Who goes with Fergus?（换行）"  
(b) long double 型的31.4  
(c) 因为1024不是浮点型数据，会报错。  
(d) long double型3.14

### Exercise 2.8
* Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.

需要查找ASCII表来寻找转义符序号。
```
#include <iostream>

using namespace std;

int main()
{
	cout << 2 << "\115\012";
	cout << 2 << "\011" << "\115" << "\012";
	
	return 0;
}
```

### Exercise 2.9
* Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.
> (a) std::cin >> int input_value;  
> (b) int i = { 3.14 };  
> (c) double salary = wage = 9999.99;  
> (d) int i = 3.14;

(a) 应该先声明变量input_value，然后读取cin数据  
(b) 在初始化int型变量i的时候，会将double型数据缩小为int，这是不合法的。可以将变量i声明为double类型。  
(c) 如果之前没有声明变量wage程序将报错。这条语句的意思是先将9999.99赋值给变量wage，然后再声明一个double型变量salary，再将wage的值赋给变量salary。  
(d) 是一条正确的语句，但是i的值只能保留3.14的整数部分。  

### Exercise 2.10
* What are the initial values, if any, of each of the following variables?

```
std::string global_str;
int global_int;
int main()
{
	int local_int;
	std::string local_str;
}
```

* global_str是全局字符串变量，所以初始值为空字符串。
* global_int是全局整型变量，因此初始值为0。
* local_int是局部整型变量，局部整型变量需要初始化，如果没有初始化，程序会报错！
* local_str是局部字符串变量，初始值为空字符串。

具体可以在程序中验证。

```
#include <iostream>

std::string global_str;
int global_int;

int main()
{
	int local_int = 0;
	std::string local_str;

	std::cout << global_str << std::endl;
	std::cout << global_int << std::endl;
	std::cout << local_int << std::endl;
	std::cout << local_str << std::endl;
	
	return 0;
}
```

### Exercise 2.11
* Explain whether each of the following is a declaration or a definition:

> (a) extern int ix = 1024;  
> (b) int iy;  
> (c) extern int iz;

(a) 定义
(b) 定义
(c) 声明

### Exercise 2.12
* Which, if any, of the following names are invalid?

> (a) int double = 3.14;  
> (b) int _;  
> (c) int catch-22;  
> (d) int 1_or_2 = 1;  
> (e) double Double = 3.14;

(a) 不能使用C++ 关键字
(b) 可以使用。
(c) 标识符只能使用字母、数字和下划线组成
(d) 不能使用C++ 操作符替代名
(e) 可以使用。

### Exercise 2.13
* What is the value of j in the following program?

```
int i = 42;
int main()
{
	int i = 100;
	int j = i;
}
```

在main函数里，重新定义了一个局部变量i，会覆盖全局变量i，此时j的值是100。

### Exercise 2.14
* Is the following program legal? If so, what values are printed?

```
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
	sum += i;
std::cout << i << " " << sum << std::endl;
```

这个程序是正确的。

虽然先定义了一个i并且初始化为100，但是在for循环中，重新定义的i会覆盖掉之前的i，所以在for循环中，i的值从0开始，计算0到10的累加值，最终结果是sun = 45。

当退出for循环之后，将访问该作用域范围下的i = 100.

### Exercise 2.15
* Which of the following definitions, if any, are invalid? Why?

> (a) int ival = 1.01;  
> (b) int &rval1 = 1.01;  
> (c) int &rval2 = ival;  
> (d) int &rval3;  

(a) 合法  
(b) 不合法。引用类型的初始值必须是对象  
(c) 合法  
(d) 不合法。引用必须初始化  

### Exercise 2.16
* Which, if any, of the following assignments are invalid? If they are valid, explain what they do.

```
int i = 0, &r1 = i;
double d = 0, &r2 = d;  
```

> (a) r2 = 3.14159;  
> (b) r2 = r1;  
> (c) i = r2;  
> (d) r1 = d;  

(a) 合法。把3.14159赋值给d  
(b) 合法。把i的值赋给d，会发生类型自动转换  
(c) 合法。把d的值赋给i，但是仅仅保留整数部分  
(d) 合法。把d的值赋给i，但是仅仅保留整数部分

### Exercise 2.17
* What does the following code print?

```
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

`i = 10`  `ri = 10`

### 










