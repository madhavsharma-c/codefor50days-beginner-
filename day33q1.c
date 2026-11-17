//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main(){
    int high=0, mid=0, low=0, target=0;
    int arr[100], n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("enter the elements of the array in sorted order\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    high= n-1;
    low= 0;
    printf("enter the target element\n");
    scanf("%d", &target);
    while (low<=high){
        mid=(low+high)/2;
        if (arr[mid]==target)
        {
            printf("item found at index %d",mid);
            break;
        }

        if (arr[mid]<target)
            low=mid+1;
        else
            high=mid-1;

            mid =0;
    }
return 0;
}