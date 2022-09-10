#include <stdio.h>
#pragma warning(disable : 4996)

int func(int);
int func_2(int);

int main_0_1()
{
	//Question 1
	for (int i = 1; i <= 10; i++)
	{
		if (i != 7)
		{
			printf("%d\n", i);
		}
	}

	//Question 2
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 7 == 0)
		{
			printf("%d\n", i);
		}
	}

	//Question 3
	int a = func(6);
	
	//Question 4
	int b = func_2(5,3);

	return 0;
}

//Question 3
int func(int x)
{
	int sum = 1;
	for (int i = 1; i <= x; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);

	return sum;
}

//Question 4
int func_2(int a, int b)
{
	int num = 1;
	for (int i = 0; i < b; i++)
	{
		num = num * a;
	}

	printf("%d", num);

	return num;
}
