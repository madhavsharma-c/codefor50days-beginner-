//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main()
{
    int l , b , perimeter, area;
    printf("enter the lenght and breath of the rectangle :");
    scanf("%d %d", &l, &b);
    perimeter = 2*(l+b);
    area = l*b;
    printf(" the area of the rectangle is %d \n the perimeter of the rectangle is %d\n",area, perimeter );
    return 0;
    
}
