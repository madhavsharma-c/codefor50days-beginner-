//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int main()
{
    int n, fact , sum =0,rem, num;
    printf("enter the number\n");
    scanf("%d",&n);
    num =n;
    while(n!=0)
    {
        rem=n%10;
        fact =1;
          for (int i = rem; i >= 2; i--)
          {
             fact *= i; 
        
            
          }
          sum+=fact;
          n=n/10;
        

        }
        


    
    if (sum == num)
    {
        printf("the number is a strong number \n");
    }else 

    {
        printf("the number is not a strong number\n");
    }
    return 0;

}