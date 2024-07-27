/*
Write a program to find out whether the given year is a Leap year or not
For example -:
   Input: 1990
   Output: Non Leap Year
    Input: 2024
    Output: Leap Year
*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Leap Year");
            }
            else
            {
                printf("Non Leap Year");
            }
        }
        else
        {
            printf("Leap Year");
        }
    }
    else
    {
        printf("Non Leap Year");
    }
    return 0;
}