//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the  array:\n");
    scanf("%d", &n);
    printf("enter the elements of the array:\n");
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
        int largest =arr[0];
        int slargest =arr[1];
        for (int i=0;i<n; i++){
          if (arr[i]>largest){
            slargest= largest;
           largest=arr[i];
            

          }
          else if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
          }

        }
        printf("The second largest element in the array is : %d\n", slargest);
        return 0;
    
    
    
    }
    