
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

### 
























