#include <stdio.h>
#pragma warning(disable : 4996)

int theSecondNmberFromRight(int);

int main_1_2()
{
	int SecondNmberRight;

	SecondNmberRight = theSecondNmberFromRight(13524);
	printf("%d\n", SecondNmberRight);

	SecondNmberRight = theSecondNmberFromRight(5684);
	printf("%d\n", SecondNmberRight);

	SecondNmberRight = theSecondNmberFromRight(32);
	printf("%d\n", SecondNmberRight);
	
	return 0;
}

int theSecondNmberFromRight(int number)
{
	return (number % 100) / 10;
}