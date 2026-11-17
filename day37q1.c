//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main(){
    int row , col;
    printf("enter the nummber of rows and columns in the array");
    scanf("%d %d", & row, &col);
    int sum[row];
    int arr[row][col];
    printf("enter the elements of the array");
    for (int i =0; i<row; i++){
        sum[i]=0;
        for (int k =0;k< col; k++){
            scanf("%d", &arr[i][k]);
            sum[i]=sum[i]+arr[i][k];
        }
    }
    for (int j=0;j<row ;j++){
        printf("%d \n " , sum[j]);

    }
return 0;

}