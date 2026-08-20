//Q2 (User Inputs, Operations & Output)
//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int num1, num2;
  printf("enter two numbers:");
  scanf("%d %d ",&num1, &num2);
  int sum, difference, product, quotient;
  sum = num1 + num2;
  difference = num1 - num2;
  product = num1 * num2;
  quotient = num1 / num2;
  printf(" the sum of the two number is %d\n the difference of the two no is %d\n the product of the two no is %d\n the quotient for the two no is %d",sum , difference, product, quotient);
  return 0;

}

