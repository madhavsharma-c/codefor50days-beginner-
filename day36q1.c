//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>

int read( int matrix[100][100]){
int rows, columns;
printf("enter the number of rows and columns in the matrix respectively:\n");
scanf("%d %d", &rows, &columns);
printf("enter the elements of the matrix:\n");
    for (int i=0; i<rows; i++){
    for (int j =0; j<columns; j++){
        scanf("%d", &matrix[i][j]); 
    }
}
        
        
        for (int i=0; i<rows; i++)
{   
    for (int j =0; j<columns; j++){
        printf("%d ", matrix[i][j]);   }
        printf("\n");
}
}


int main(){
    int arr[100][100];
    read(arr);
    return 0;
}