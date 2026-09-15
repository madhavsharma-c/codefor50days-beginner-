//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    int n;
    int _n;
    

    int rev=0, rem;
    printf("enter the number you want to check for palindrome nature:\n");
    scanf("%d",&n);
    _n=n;
    while (n != 0) {
        rem = n % 10;       
        rev = rev * 10 + rem; 
        n = n / 10;     
       

    }
    if (rev==_n)
    {
        printf("the number is palindrome \n");

    }
    else {
        printf("the number is not palindrome\n");

    }
    return 0;

}