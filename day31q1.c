//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int n, i, lost, arr[100];
    printf("enter the  number of elements:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");

    for (i=0; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    
    }
printf("enter the element you want to search for :\n");
    scanf("%d", &lost);
    for (int j=0; j<=n; j++){
    if (arr[j]==lost)
    {
        printf("found at index =%d",j);
        
    }
    }
return 0;
}