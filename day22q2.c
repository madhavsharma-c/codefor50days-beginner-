//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;  

    printf("Enter the number of terms in the series:\n");
    scanf("%d", &n);

    printf("The series is:\n");

    
    for (i = 1; i <= n; i++)
    {
        int num = 2 * i - 1;  
        int den = (i == 1) ? 1 : (2 * i - 2);
        float term = (float)num / den;

        sum += term;  

        
        if (i == n)
            printf("%d/%d", num, den);
        else
            printf("%d/%d + ", num, den);
    }

    printf("\nsum: %.2f\n", sum);

    return 0;
}
