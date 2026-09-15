//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter the number whose factors you want to find\n");
    scanf("%d",&num);
    printf("the factor of the number %d is %d ", num,num );
    for (int i = 1; i <= num; ++i)
    {
        if (num%i==0)
        {
            printf("%d ",i);
        
        }
        
    }
    
}