//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main(){
    int n1, n2 ;
    int arr1[100], arr2[100], merged[200];
    printf("Enter size of first array:\n ");
    scanf("%d", &n1);
     printf("Enter size ofsecond array:\n ");
    scanf("%d", &n2);
    printf(" enter the elements of first array\n");
    for (int i =0; i<n1; i++)
        scanf("%d", &arr1[i]);
    printf("enter the elements of second array\n");
    for (int j=0;j<n2;j++)
        scanf("%d", &arr2[j]);
    
        for (int k=0; k<n1; k++)
            merged[k]=arr1[k];
        
        for (int l=0; l<n2; l++)
            merged[n1+l]=arr2[l];

            for (int m=0; m<n1+n2; m++)
            printf("%d ", merged[m]);

            return 0;


    
}

