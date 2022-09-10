#include <stdio.h>
#pragma warning(disable : 4996)

funcName(int); //mainהכרזה על פונקציה על מנת שנוכל לכתוב אותה מתחת ל

int main_1()
{
	//Infinite loop
	int a = 10;
	while (a <20)
	{
		printf("%d\n", a);
		a--;
	}

	//For loop that calls a function
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", funcName(funcName(i)));
		
	}

	//if, else if, else
	int input;
	scanf("%d", &input);
	if (input == 10)
	{
		printf("10");
	}
	else if (input == 11)
	{
		printf("11");
	}
	else if (input == 12)
	{
		printf("12");
	}
	else if (input == 13)
	{
		printf("13");
	}

	//Switch
	int input2;
	scanf("%d", &input2);
	switch (input2)
	{
	case 9: // בגלל שאין עצור אז זה ידפיס 10 
	
	case 10:
		printf("10");
		break;

	case 11:
		printf("11");

	case 12:
		printf("12");
		break;

	case 13:
		printf("13");
		break;

	default:
		printf("Not Found");
		break;
		
	}

	return 0;
}

int funcName(int a)
{
	return a * a;
}
