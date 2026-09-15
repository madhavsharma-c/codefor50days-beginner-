//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/#include<stdio.h>
int main()
{
    int n,rem, product=1;
    printf("enter the number whose digits product you want to find out\n");
    scanf("%d", &n);
    while(n!=0)
    {
        rem=n%10;
        if (rem%2!=0)
        {
            product *= rem;
        }
    
        n=n/10;
          
        
    }
    printf("the products of the digits is = %d" ,product);
    return 0;
            


}