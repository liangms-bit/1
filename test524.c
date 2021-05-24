#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//struct stu
//{
//	char a[20];
//	int b;
//	char c[20];
//};
//struct tu
//{
//	char i[20];
//	struct stu s;
//		char* p;
//};
//void print1(struct tu s)
//{
//	printf("%s\n", s.i);//lili
//
//	printf("%s  %d  %s\n", s.s.a, s.s.b, s.s.c);// "张三",20,'f'
//	printf("%s\n", s.p);//hello bit

//}
//void print2(struct tu *s)
//{
//	printf("%s\n", s->i);//lili
//
//	printf("%s  %d  %s\n", s->s.a, s->s.b, s->s.c);// "张三",20,'f'
//	printf("%s\n", s->p);//hello bit
//
//}
//int main()
//{
//	char k[20] = "hello bit";
//	struct stu d = { "张三",20,'f' };
//	struct stu e = { "李四",20,'f' };
//	struct tu t = { "lili",e,k };
//	
//	print1(t);
//	print2(&t);
//	system("pause");
//	return 0;
//}

int main()
{
	/*int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d  ", i);
	}
	printf("\n");

	for (i = 0; i < 100; i++)
	{
		printf("%d  ", 10 - i);
	}
	system("pause");*/


	int n = 0;
	
	int r = 1;
	int sum = 0;
	int i = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		r = 1;
		for (j = 1; j <= i; j++)
		{
	
			r *= j;
		}
		sum += r;
	}
	printf("%d", sum);
	return 0;
}