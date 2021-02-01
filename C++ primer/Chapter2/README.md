
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



























