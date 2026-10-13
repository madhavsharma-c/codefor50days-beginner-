//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if(str[len-1]=='\n') len--;

    int flag=1;
    for(int i=0; i<len/2; i++)
        if(str[i] != str[len-1-i]) flag=0;

    if(flag) printf("Yes! '%s' is a palindrome.\n", str);
    else printf("Nope, '%s' is not a palindrome.\n", str);
    return 0;
}
