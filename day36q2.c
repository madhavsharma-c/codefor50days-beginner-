//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main(){
    int rows, col;
    int sum =0;
    printf("enter the number of rows and columns of the matrix respectively:\n");
    scanf("%d %d", &rows, &col);
    printf("enter the elements of the matrix:\n");
    int matrix[rows][col];
    for (int i=0; i<rows; i++){
        for (int j =0;j< col; j++){
            scanf("%d", &matrix[i][j]);
            sum +=matrix [i][j];
        }
    }
    printf("the sum of all the elements in the matrix iss : \n %d" , sum);
    return 0;
}