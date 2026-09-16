//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
    
*/
#include<stdio.h>
int main()
{
    int n,rem, sum=0;
    printf("enter the number whose digits sum you want to find out\n");
    scanf("%d", &n);
    while(n!=0)
    {
        rem=n%10;
        sum += rem;
        n=n/10;
          
        
    }
    printf("the sum of the digits is = %d" ,sum);
    return 0;
            


}