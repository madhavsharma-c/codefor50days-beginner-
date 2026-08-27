//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include<stdio.h>
int main()
{
    int n ;
    do{
        
    printf(" enter the day of the week :\n");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        
            printf("MONDAY\n");
            break;
        case 2:
        
            printf("TUESDAY\n");
            break;

        
        case 3:
        
            printf(" WEDNESDAY\n");
            break;

        
        case 4:
        
            printf(" THURSDAY\n");
            break;

        
        case 5:
        
            printf(" FRIDAY\n");
            break;

        
        case 6:
        
            printf(" SATURDAY\n");
            break;
        
        case 7:

        
            printf(" SUNDAY\n");
            break;
            
    
         default:
            printf("Invalid choice!\n");
    }
    
    }while (n!= 7);
    return 0;
    
}
    

    
    

