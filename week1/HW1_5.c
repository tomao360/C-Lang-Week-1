#include <stdio.h>
#pragma warning(disable : 4996)

long isPolindrome(long);

int main_1_5()
{
    long num;
    printf("Please enter an even number of digits: \n");
    scanf("%ld", &num);
    
    if (isPolindrome(num) == 1)
    {
        printf("The number is Polindrome");
    }
    else
    {
        printf("The number is not Polindrome");
    }
  
    return 0;
}

long isPolindrome(long num) //123321
{
    int arr[1000];
    long number = num; // עושים השמה על מנת שנוכל אחר כך לאתחל את הפרמטר שלנו שוב

    int digits = 0; //counter for digits in a number
    while (number != 0)
    {
        number = number / 10;
        digits++;
    }
    number = num; // מאתחלים את הפרמטר שיחזור למספר המקורי - הלולאה למעלה גרמה לפרמטר להיות 0 וכך אנחנו מחזירים אותו למספר שנקלט
   
    for (int i = 0; i < digits; i++) // מכניסים למערך את הספרות
    {
        arr[i] = number % 10; //מכניסים את הספרה האחרונה לתא במערך 
        number = number / 10; //מקצצים את המספר כל פעם באחד
    }
    
    for (int i = 0; i < digits/2; i++) // מאחר ומשווים בין התא הראשון לתא האחרון בלולאה אז מספיק שנרוץ על חצי מהקאונטר שלנו
    {
        if (arr[i] != arr[digits - 1 - i]) // בודקים אם התא הראשון במערך שונה מהתא האחרון 
        {
            return 0;
        }
    }
    return 1;
}