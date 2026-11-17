//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include<stdio.h>
int main(){
  char str[100];
  printf("enter the string: \n ");
  fgets(str, sizeof(str), stdin);
  for (int i=0; str[i]!='\0'; i++){
    if (str[i]>='A' && str[i]<='Z'){
      str[i]+=32;

    }
    if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
      continue;

    }
    else {
      printf("%c",str[i]);
    }
  }

  }
