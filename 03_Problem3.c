/*
Write a program check whether the Package is Dream Package or not
Note :-- if the salary is maximum than 5 lakh than return 'Dream' otherwise return 'NotDream'
For example -:
   Input: 100000
   Output: NOTDREAM
*/
#include <stdio.h>
int main()
{
    int salary;
    printf("Enter salary : ");
    scanf("%d", &salary);
    if (salary >= 500000)
    {
        printf("DREAM");
    }
    else
    {
        printf("NOT DREAM");
    }
    return 0;
}