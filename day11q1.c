//git Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include<stdio.h>
int main()
{
    int  n;
    do{
         printf(" enter the month number \n");
         scanf("%d",&n);
         switch(n)
         {
            case 1:
            printf(" january, 31 days\n");
            break;
            case 2:
            printf(" FEBRUARY , 28 days\n");
            break;
            case 3:
            printf("MARCH, 31 days\n");
            break;
            case 4:
            printf("APRIL, 30 days\n");
            break;
            case 5:
            printf(" MARCH, 31 days\n");
            break;
            case 6:
            printf(" JUNE, 30 days\n");
            break;
            case 7:
            printf(" JULY, 31 days\n");
            break;
            case 8:
            printf("AUGUST, 30 days\n");
            break;
            case 9:
            printf(" SEPTEMBER , 31 days\n");
            break;
            case 10:
            printf(" OCTOBER, 30 DAYS❤️\n");
            break;
            case 11:
            printf(" NOVEMBER, 31 days\n");
            break;
            case 12:
            printf("DECEMBER, 30 days\n");
            break;
            default:
            printf(" invalid choice\n");

         }

    }
    while( n!=12);
    return 0;
}