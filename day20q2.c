//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>

int main()
{
    int n,rem ;
    printf("enter the number whose digits compliment you want to find out\n");
    scanf("%d", &n);
    while(n!=0)
    {
        rem=n%10;
        if (rem==1)
        {
           printf("1");
        }
        else {
            printf("0");
        }
    
        n=n/10;
          
        
    }
    
    return 0;
            


}