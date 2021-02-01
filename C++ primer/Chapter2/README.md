
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

### 
























