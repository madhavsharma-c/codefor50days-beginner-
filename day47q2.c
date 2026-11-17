//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include<stdio.h>
#include<string.h>
int main(){
  char str [200];
  int n=0;
  int maxstart=0, start=0, current=0,  max=0;
  printf("enter the string\n");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")]='\0';
  for (int i =0; ; i++){
    if (str[i]!=' ' && str[i]!='\0'){
          current++;

    }
    else {
      if (current>max){
        max=current ;
        maxstart=start;

      }
      current =0;
      start=i+1;
      if (str[i]=='\0')
      break;
    }
  }printf("the longest word in the string is :\t");
for ( int j=maxstart; j<max+ maxstart; j++){
  
printf("%c",str[j]);
}
return 0;
}