//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
int main()
{
    int n,i, temp;
    int arr[100];
    printf("enter the number of elements :");
    scanf("%d",&n);
    printf("enter the elements");
    for (i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for (int j=0; j<n/2; j++){
        temp = arr[j];
        arr[j] = arr[n-j-1];
        arr[n-j-1] = temp;
    }
    for (int k=0; k<n; k++){
        printf("%d", arr[k]);
    }
    return 0;

    }
