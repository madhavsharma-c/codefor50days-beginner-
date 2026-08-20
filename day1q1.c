//Q1: Write a program to input two numbers and display their sum

#include <stdio.h>

int main(void)
{
    int num1, num2;
    int sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("The sum of the two numbers is: %d\n", sum);

    return 0;
}