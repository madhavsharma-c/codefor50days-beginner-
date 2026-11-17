//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>
int main()
{
    int n, i, pos=0, neg=0, zero=0;
    int arr[100];
    printf("enter the number of elements: ");
    scanf("%d", &n);
    printf("enter the elements:");
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for (int j=0; j<n;j++){
        if (arr[j]>0){
            pos++;
        }
        else if (arr[j]<0){
            neg++;
        }
        else{
            zero++;
        }
        }
        printf("Positive=%d\n Negative=%d\n Zero=%d", pos, neg, zero);
    }
    
