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
    long number = num; // ����� ���� �� ��� ����� ��� �� ����� �� ������ ���� ���

    int digits = 0; //counter for digits in a number
    while (number != 0)
    {
        number = number / 10;
        digits++;
    }
    number = num; // ������� �� ������ ������ ����� ������ - ������ ����� ���� ������ ����� 0 ��� ����� ������� ���� ����� �����
   
    for (int i = 0; i < digits; i++) // ������� ����� �� ������
    {
        arr[i] = number % 10; //������� �� ����� ������� ��� ����� 
        number = number / 10; //������ �� ����� �� ��� ����
    }
    
    for (int i = 0; i < digits/2; i++) // ���� ������� ��� ��� ������ ��� ������ ������ �� ����� ����� �� ��� �������� ����
    {
        if (arr[i] != arr[digits - 1 - i]) // ������ �� ��� ������ ����� ���� ���� ������ 
        {
            return 0;
        }
    }
    return 1;
}