//dayQ68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the  elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int pos;
    printf("enter the index of the element to be deleted\n");
    scanf("%d", &pos);
    for (int i  =pos;  i<n-1; i++){
        array[i]=array[i+1];

    }
    n--;
    printf("Array after deletion:\n");
    for(int i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    return 0;
}