#include <stdio.h>
#pragma warning(disable : 4996)

int returnRightDigit(int);

int main_1_1()
{
	
	int rightDigit;

	int num;
	printf("Please enter a number + EMTER\n");
	scanf("%d", &num);

	rightDigit = returnRightDigit(num);
	printf("%d", rightDigit);

	return 0;
}

int returnRightDigit(int number)
{
	return number % 10;
}