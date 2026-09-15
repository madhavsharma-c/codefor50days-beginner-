//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int num, i;
    int ISprime = 1; 

    printf("Enter the number you want to check for prime nature:\n");
    scanf("%d", &num);

    if (num <= 1) {
        ISprime = 0;  
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                ISprime = 0; 
                break;
            }
        }
    }

    if (ISprime == 1)
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");

    return 0;
}