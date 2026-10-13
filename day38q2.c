//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
  #include <stdio.h>

int main() {
    int n, flag=1;
    scanf("%d", &n);
    int matrix[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &matrix[i][j]);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(matrix[i][j] != matrix[j][i])
                flag = 0;

    if(flag) printf("Symmetric\n");
    else printf("Not Symmetric\n");
    return 0;
}
