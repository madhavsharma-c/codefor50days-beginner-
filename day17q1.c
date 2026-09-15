//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num, orignal_num, remainder, result;
    int d;// will store the number of digits
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        d = 1;  // Special case for 0
    } else {

    
        while (num != 0) {
            num /= 10;   // Remove last digit
            d++;     // Count digits
        }

        }
        orignal_num =num;
        while(orignal_num!=0)
        {
            remainder=orignal_num%10;
            result += pow(remainder , num);
            orignal_num/=10;

        }
        if(num==result)
        {
            printf(" the number is angstrom\n");

        }
        else
        {
            printf("the number is not angstrom\n");
        }
        return 0;
    }
   
    


    
      
        
            
        
        

