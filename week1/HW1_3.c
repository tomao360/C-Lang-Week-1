#include <stdio.h>
#pragma warning(disable : 4996)

int numberIsPrime(int);

int main_1_3()
{
	int num;
	printf("Please enter a number + ENTER\n");
	scanf("%d", &num);
	printf("%d", numberIsPrime(num));

	return 0;
}

int numberIsPrime(int number)
{
	int prime = 1;

	for (int i = 2; i < number/2; i++) //��� �� ������� �� �� ���� ����� ����// ����� ������ �� ������ ���� �� �� ������ ����� �� ����� ����� �� ���� ��� �� ��� �� ����� ����� �� ���� ����
	{
		if (number % i == 0)
		{
			prime = 0;
		}
	}

	return prime;
}