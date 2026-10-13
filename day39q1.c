//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int n, distinct=1;
    scanf("%d", &n);
    int matrix[n][n], diag[n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &matrix[i][j]);

    for(int i=0; i<n; i++) {
        diag[i] = matrix[i][i];
        for(int j=0; j<i; j++)
            if(diag[i] == diag[j]) distinct=0;
    }

    if(distinct) printf("Diagonal elements are distinct\n");
    else printf("Diagonal elements are not distinct\n");
    return 0;
}
