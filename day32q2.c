//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
int main(){
    long long int theNumber;
    int digit;
   int frequency[10] = {0};
    printf("Enter the number\n");
    scanf("%lld", &theNumber);
    while(theNumber!=0){
        digit= theNumber%10;
        frequency[digit]++;
        theNumber=theNumber/10;
    }
    int maxCount = 0, ans = 0;
    for (int d = 0; d <= 9; d++) {
        if (frequency[d] > maxCount) {   // strict > keeps the smaller digit on ties
            maxCount = frequency[d];
            ans = d;
        }
    }
    printf("The maximum appearing integer is :%d\n", ans);
    return 0;
    
}