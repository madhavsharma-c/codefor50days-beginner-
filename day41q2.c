//82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    char ch[100];
    printf("enter the string :\n");
    fgets(ch, sizeof(ch), stdin);

    for (int i =0; ch[i]!='\0'; i++){
        if (ch[i]!='\n'){
            printf("%c\n", ch[i]);
        }
    }
    return 0;
}

