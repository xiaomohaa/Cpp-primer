
## Chapter 2. Variables and Basic Types

### Exercise 2.1
* What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

**����**  
C++ ���Թ涨һ��int���ٺ�һ��shortһ����һ��long���ٺ�һ��intһ����һ��long long���ٺ�һ��longһ�������У���������long long����C++11���¶���ġ�

**������**  
C++��׼ָ����һ����������Чλ������Сֵ��ͨ����float��1����(32����)����ʾ��double��2����(64����)����ʾ��long double��3��4����(96��128����)����ʾ��

**���������ͺ��޷�������**  
��ȥ�����ͺ���չ���ַ���֮�⣬�������Ϳ��Ի���Ϊ�����ŵ�(signed)���޷��ŵ�(unsigned) ���֡����������Ϳ��Ա�ʾ������������0���޷�����������ܱ�ʾ���ڵ���0��ֵ��  
����int��short��long��long long���Ǵ����ŵģ�ͨ������Щ������ǰ���unsigned�Ϳ��Եõ��޷������͡�
 
**���ѡ������**
* ����ȷ֪����ֵ������Ϊ��ʱ��ѡ���޷������͡�  
* ʹ��int ִ���������㡣��ʵ��Ӧ���У�short�����Ե�̫С��longһ���int��һ���ĳߴ硣��������ֵ������int�ı�ʾ��Χ��ѡ��long long��  
* ���������ʽ�в�Ҫʹ�� char��bool, ֻ���ڴ���ַ��򲼶�ֵʱ��ʹ�����ǡ���Ϊ����char��һЩ���������з��ŵģ�������һЩ�����������޷��ŵģ��������ʹ��char���������ر����׳����⡣�������Ҫʹ��һ���������������ô��ȷָ������������signed char����unsigned char��
* ִ�и���������ѡ��double,������Ϊfloatͨ�����Ȳ�������˫���ȸ������͵����ȸ������ļ����������޼�����ʵ�ϣ�����ĳЩ������˵��˫�������������ȵ����Ȼ��졣long double �ṩ�ľ�����һ���������û�б�Ҫ�ģ�����������������ʱ����Ҳ���ݺ��ӡ�

### Exercise 2.2
* To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

ѡ�񸡵���float����˫������double��

��Ϊ�ڽ��м����ʱ��Ҫ�漰С�������㡣

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

����u��u2��������޷��ŵ�int�����ݣ���ʾ��ΧΪ0~4,294,967,296

����i��i2��������з��ŵ�int�����ݣ���ʾ��ΧΪ-2,147,483,648~2,147,483,647
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

(a) �ַ�a�����ַ�a���ַ���a�����ַ���a  
(b) int��10��unsigned int��10��long��10��unsigned long��10���˽���10��ʮ������10  
(c) double��3.14��float��3.14��long double��3.14  
(d) int��10��unsigned int��10��double��10.0��double��0.1

### Exercise 2.6
* What, if any, are the differences between the following definitions:
```
int month = 9, day = 7;
int month = 09, day = 07;
```

��Ϊ��0��ͷ����������˽�������  
���Ե�һ�ж����month��day����ʮ���Ƶġ�  
�ڶ��ж����month�ǻᱨ��ģ���Ϊ9�ǰ˽�������Ч�����֣�Ȼ��day�Ķ�������Ч�ģ�����Ϊ�˽��Ƶ�07.

### Exercise 2.7
* What values do these literals represent? What type does each have?
> (a) "Who goes with F\145rgus?\012"  
> (b) 3.14e1L  
> (c) 1024f  
> (d) 3.14L

��(a)�У�����ת���ַ�'\'���ڵ�һ��ת���ַ�Ϊ��\145������ӦASCII�еġ�e�����ڶ���ת���ַ���\012��,��ӦASCII�еĻ��С�  
(a) "Who goes with Fergus?�����У�"  
(b) long double �͵�31.4  
(c) ��Ϊ1024���Ǹ��������ݣ��ᱨ��  
(d) long double��3.14

### Exercise 2.8
* Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.

��Ҫ����ASCII����Ѱ��ת�����š�
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
* Explain the following definitions. For those that are illegal, explain what��s wrong and how to correct it.
> (a) std::cin >> int input_value;  
> (b) int i = { 3.14 };  
> (c) double salary = wage = 9999.99;  
> (d) int i = 3.14;

(a) Ӧ������������input_value��Ȼ���ȡcin����  
(b) �ڳ�ʼ��int�ͱ���i��ʱ�򣬻Ὣdouble��������СΪint�����ǲ��Ϸ��ġ����Խ�����i����Ϊdouble���͡�  
(c) ���֮ǰû����������wage���򽫱�������������˼���Ƚ�9999.99��ֵ������wage��Ȼ��������һ��double�ͱ���salary���ٽ�wage��ֵ��������salary��  
(d) ��һ����ȷ����䣬����i��ֵֻ�ܱ���3.14���������֡�  

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

* global_str��ȫ���ַ������������Գ�ʼֵΪ���ַ�����
* global_int��ȫ�����ͱ�������˳�ʼֵΪ0��
* local_int�Ǿֲ����ͱ������ֲ����ͱ�����Ҫ��ʼ�������û�г�ʼ��������ᱨ��
* local_str�Ǿֲ��ַ�����������ʼֵΪ���ַ�����

��������ڳ�������֤��

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

(a) ����
(b) ����
(c) ����

### Exercise 2.12
* Which, if any, of the following names are invalid?

> (a) int double = 3.14;  
> (b) int _;  
> (c) int catch-22;  
> (d) int 1_or_2 = 1;  
> (e) double Double = 3.14;

(a) ����ʹ��C++ �ؼ���
(b) ����ʹ�á�
(c) ��ʶ��ֻ��ʹ����ĸ�����ֺ��»������
(d) ����ʹ��C++ �����������
(e) ����ʹ�á�

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

��main��������¶�����һ���ֲ�����i���Ḳ��ȫ�ֱ���i����ʱj��ֵ��100��

### Exercise 2.14
* Is the following program legal? If so, what values are printed?

```
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
	sum += i;
std::cout << i << " " << sum << std::endl;
```

�����������ȷ�ġ�

��Ȼ�ȶ�����һ��i���ҳ�ʼ��Ϊ100��������forѭ���У����¶����i�Ḳ�ǵ�֮ǰ��i��������forѭ���У�i��ֵ��0��ʼ������0��10���ۼ�ֵ�����ս����sun = 45��

���˳�forѭ��֮�󣬽����ʸ�������Χ�µ�i = 100.

### Exercise 2.15
* Which of the following definitions, if any, are invalid? Why?

> (a) int ival = 1.01;  
> (b) int &rval1 = 1.01;  
> (c) int &rval2 = ival;  
> (d) int &rval3;  

(a) �Ϸ�  
(b) ���Ϸ����������͵ĳ�ʼֵ�����Ƕ���  
(c) �Ϸ�  
(d) ���Ϸ������ñ����ʼ��  

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

(a) �Ϸ�����3.14159��ֵ��d  
(b) �Ϸ�����i��ֵ����d���ᷢ�������Զ�ת��  
(c) �Ϸ�����d��ֵ����i�����ǽ���������������  
(d) �Ϸ�����d��ֵ����i�����ǽ���������������

### Exercise 2.17
* What does the following code print?

```
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

`i = 10`  `ri = 10`

### 










