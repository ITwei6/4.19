#include <stdio.h>
#include <iostream>
using namespace std;
void fun(int a,int b=2,int c=3)
{
	cout << a<< endl;
	cout << b << endl;
	cout << c << endl;
}
void fun2(int a,int b, int c = 9)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
//int main()
//{
//	fun();//没有指定实参，则使用缺省参数
//	fun(20);//指定实参
//}
typedef struct SQList
{
	int* a;
	int size;
	int capacity;
}SQList;
void SQInit(SQList *s,int defalutCapacity=4)
{
	s->a = (int*)malloc(sizeof(SQList) * defalutCapacity);
	if (s->a == NULL)
	{
		perror("malloc");
	}
}
//int main()
//{
//	SQList s;
//	SQInit(&s);//如果不知道要插入多少数据，那就按照默认值4来
//	SQInit(&s, 100);//如果知道要插入多少数据，那么直接就开辟这么大的空间，不需要不断的扩容到100
//}
//int Add(int left, int mid,int right)
//{
//	return left+mid + right;
//}
//int Add(int left, int right)
//{
//	return left + right;
//}
//double Add(double left, double right)
//{
//	return left + right;
//}
////参数个数
//void fun1(int a, char c)
//{
//	cout << a << " " << c << endl;
//
//}
//void fun1(char c, int a)
//{
//	cout << c << " " << a << endl;
//}
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a=0)
//{
//	cout << "f(int a)" << endl;
//}
//int main()
//{
//	f();
//}
int Add(int a, int b)
{
	return a + b;
}
void func(int a, double b, int p)
{

}
int main()
{
	Add(5, 6);
	func(1, 9,8);
}