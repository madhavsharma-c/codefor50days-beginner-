//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include<stdio.h>
#include<string.h>
int main(){
  char str[100];
  printf("enter the string \n");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  int n =strlen(str);
  for (int i =0; i<n; i++){
    if (i==0){
      printf("%c.", str[i]);
    }
    else if (str[i]==' ' && i!=n-1){
      printf("%c.", str[i+1]);
    }
  }
  return 0;
}