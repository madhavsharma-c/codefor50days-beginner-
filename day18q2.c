//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int num1,num2;
    int hcf;
    printf(" enter  the two number whose hcf you want to find out \n");
    scanf("%d %d", &num1, &num2);

     for (int i = 1; i <= (num1 < num2 ? num1 : num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    printf("the hcf of these two numbers are %d", hcf);
    return 0;
}