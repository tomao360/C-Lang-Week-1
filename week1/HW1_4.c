#include <stdio.h>
#pragma warning(disable : 4996)

long numberIsPrime2(long);

int main_1_4()
{
	for (long i = 1; i <= 100000 ; i++) 
	{
		if (numberIsPrime2(i) == i)
		{
			printf("%ld, ", i);
		}
	}

	/* ������ i����� ����� �������� ���� ������ �� � 
	 i���� �������� ���� ����� ����� ������ ���� �
	 ���� ������ ����� ������ �� ������ ���� �� �� ������ ����� �� ����� ����� �� ���� ��� �� ��� �� ����� ����� �� ���� ����
	 ����� ������ ��� �� ������ ����� ���, ����� ���� ������ ����� �� ����� ������ �����
	 �� �����  i���� ����� ����� �����, ����� ������ ������ ������ ������ �������� ���� � 
	*/

	return 0;
}

long numberIsPrime2(long number)
{
	int prime = number;

	for (int i = 2; i <= number/2; i++)
	{
		if (number % i == 0)
		{
			prime = 0;
		}
		else
		{
			prime = number;
		}
	}

	return prime;
}