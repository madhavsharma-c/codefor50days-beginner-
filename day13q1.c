/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    int  num1, num2 , result;
    char operator;
    printf(" enter the two number you want to perform operation on and the operator \n enter done if you want to exit the program");
    scanf("%d %d %c", &num1,&num2, &operator);
    switch (operator)
    {
        case '+':
        result =num1+num2;
        printf("the result is %d", result);
        break;
        
        case '-':
        result =num1-num2;
        printf("the result is %d", result);
        break;

        case '*':
        result=num1*num2;
        printf("the result is %d", result);
        break;

        case '/':
        result =num1/num2;
        printf("the result is %d", result);
        break;

        case '%':
        result = num1%num2;
        printf("the result is %d", result);
        break;

        default:
        printf("Invalid operator");
        break;

        


        

}
return 0;
}
