//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements in the array:\n");
    scanf("%d", &n);
    int array[n];
    printf("enter the elements of the array");
    for (int i=0; i<n; i++)
        scanf("%d", &array[i]);
        printf("enter the number of positions to rotate the array:\n");
        int k;
        scanf("%d", &k);
        for (int i=0; i<k; i++)
        {
            int last = array[n-1];
            for (int j = n-1; j > 0; j--)
            {
                array[j] = array[j-1];
            }
            array[0] = last;
        }
      


        printf("The rotated array is:\n");
        for (int i=0; i<n; i++)             
            printf("%d ", array[i]);

            return 0;

}