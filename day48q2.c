//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets
    str[strcspn(str, "\n")] = '\0';

    int start = 0;
    int len = strlen(str);

    for (int i = 0; i <= len; i++) {

        // End of a word
        if (str[i] == ' ' || str[i] == '\0') {

            int end = i - 1;

            // Reverse current word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            // Start of next word
            start = i + 1;
        }
    }

    printf("Reversed sentence:\n%s", str);

    return 0;
}