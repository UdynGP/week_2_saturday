/*
Write a program to check whether the given number is a Perfect Number or not.
For example -:
   Input: 1
   Output: YES
   Input: 96345
   Output: NO
*/
#include <stdio.h>

int isPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        if (num == 1 || isPerfectNumber(num))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}