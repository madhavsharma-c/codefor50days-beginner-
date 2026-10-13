//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Diagonal traversal:\n");
    for(int d=0; d<2*n-1; d++) {
        int row = d<n ? d : n-1;
        int col = d<n ? 0 : d-n+1;
        while(row>=0 && col<n) {
            printf("%d ", matrix[row][col]);
            row--; col++;
        }
        printf("\n");
    }
    return 0;
}
