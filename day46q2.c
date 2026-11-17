//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int flag = 0;

    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (str[i] == str[j]) {
                printf("The character is %c\n", str[i]);
                flag = 1;
                break;
            }
        }

        if (flag == 1) {
            break;
        }
    }

    if (flag == 0) {
        printf("No repeating character found.\n");
    }

    return 0;
}