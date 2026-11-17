//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
//Q99: Change the date format from dd/mm/yyyy to dd-Mmm-yyyy.

/*
Sample Test Case:
Input:
15/04/2025

Output:
15-Apr-2025
*/

#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    printf("Enter date (dd/mm/yyyy): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("%c%c-", str[0], str[1]);
    if (str[3] == '0' && str[4] == '1')
        printf("Jan");
    else if (str[3] == '0' && str[4] == '2')
        printf("Feb");
    else if (str[3] == '0' && str[4] == '3')
        printf("Mar");
    else if (str[3] == '0' && str[4] == '4')
        printf("Apr");
    else if (str[3] == '0' && str[4] == '5')
        printf("May");
    else if (str[3] == '0' && str[4] == '6')
        printf("Jun");
    else if (str[3] == '0' && str[4] == '7')
        printf("Jul");
    else if (str[3] == '0' && str[4] == '8')
        printf("Aug");
    else if (str[3] == '0' && str[4] == '9')
        printf("Sep");
    else if (str[3] == '1' && str[4] == '0')
        printf("Oct");
    else if (str[3] == '1' && str[4] == '1')
        printf("Nov");
    else if (str[3] == '1' && str[4] == '2')
        printf("Dec");

    
    printf("-%c%c%c%c", str[6], str[7], str[8], str[9]);

    return 0;
}