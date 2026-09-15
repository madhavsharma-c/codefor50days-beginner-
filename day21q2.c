//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main()
{
    int num, i, per = 0;

    printf("enter the number you want to check:\n");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Not perfect number\n");
        return 0;
    }

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            per += i;
        }
    }

    if (per == num)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not perfect number\n");
    }

    return 0;
}
