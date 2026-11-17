//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/



#include <stdio.h>

int main() {
    char str[100];
    int con=0, vowels=0;
    printf("enter the string :\n");
    fgets(str, sizeof(str), stdin);

    for (int i =0; str[i]!='\0'; i++){
        if (str[i]>='A' && str[i]<='Z'){
            str[i]+=32;

        }
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        vowels++;}
        else{ con++;}
    }
       printf("Vowels:\t%d",vowels);
       printf("Constonants:\t%d", con);
       return 0; 

    }
