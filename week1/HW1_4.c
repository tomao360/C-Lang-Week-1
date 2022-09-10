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

	/* לפרמטר iהתנאי ייכנס לפונקציה למטה ויכניס את ה 
	 iבתוך הפונקציה עצמה אנחנו ניישם שפריים שווה ל
	 בתוך הלולאה בתנאי מחלקים את הפרמטר בחצי כי אם בלולאה המספר לא מתחלק בכלום עד החצי שלו אז הוא לא יתחלק בכלום גם בחצי השני
	 במידה והמספר הוא לא ראשוני נחזיר אפס, במידה והוא ראשוני נחזיר את המספר ונחזור למיין
	 אז נדפיס  iבתוך המיין נמשיך בתנאי, במידה והמספר שהוחזר כתוצאה מקריאה לפונקציה שווה ל 
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