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
//	fun();//û��ָ��ʵ�Σ���ʹ��ȱʡ����
//	fun(20);//ָ��ʵ��
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
//	SQInit(&s);//�����֪��Ҫ����������ݣ��ǾͰ���Ĭ��ֵ4��
//	SQInit(&s, 100);//���֪��Ҫ����������ݣ���ôֱ�ӾͿ�����ô��Ŀռ䣬����Ҫ���ϵ����ݵ�100
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
////��������
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