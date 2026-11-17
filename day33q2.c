//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main(){
    int n; 
    int arr[100];
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements one by one in sorted manner\n");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the element to be inserted\n");
    int element;
    scanf("%d", &element);
    printf("enter the position at which this element is to be inserted");
    int pos=0;
    scanf("%d", &pos);
    for (int i=n ; i>=pos; i--){
        arr[i+1]=arr[i];
        }
        arr[pos]=element;
        printf("Array after insertion:\n");
        for (int i=0; i<=n; i++){
            printf("%d ", arr[i]);
        }
return 0;
}