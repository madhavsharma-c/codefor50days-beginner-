//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include<stdio.h>
#include<string.h>
int main(){
  char str1[200], str2[100];
  
  int n ;
  printf("enter the two strings:\n");
  fgets(str1, sizeof(str1), stdin);
  fgets(str2, sizeof(str2), stdin);
  str1[strcspn(str1, "\n")] = '\0';
str2[strcspn(str2, "\n")] = '\0';
 char combined[400];

strcpy(combined, str1);
strcat(combined, str1);
  
  if (strstr(combined, str2) != NULL){
    printf("yes the strings are rotation of one another \n");
}
else
printf("no\n");
}