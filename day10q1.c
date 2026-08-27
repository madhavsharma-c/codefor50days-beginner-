/* Q19: Write a program to classify a triangle as Equilateral, Isosceles, or
    Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main()
{
    int a, b, c;
    printf(" enter the three sides of the triangle who you want to classify:\n");
    scanf("%d %d %d", &a , &b , &c);
    if (a == b && b == c)
    {
        printf("the triangle is a equilateral triangle ");
    }
    else if (a == b || b == c || a == c)
    {
        printf(" the triangle is isoceleos");

    }
    else
    {
        printf("Scalene\n");
    }
    return 0;
    }
    

