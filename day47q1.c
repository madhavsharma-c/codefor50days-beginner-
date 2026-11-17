//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include<stdio.h>
#include<string.h>
int main(){
  char input1[100], input2[100];
  int n1 , n2;
  int flag =0;
  int used[100]={0};


  printf("enter the two words one after another :\n");
  fgets(input1, sizeof(input1), stdin);
  fgets(input2, sizeof(input2), stdin);
  n1=strlen(input1);
  n2=strlen(input2);
  if (n1==n2){
  for (int i=0; input1[i]!='\0'; i++){
      for (int j =0; input2[j]!='\0' ; j++){
        if (input1[i]==input2[j] && used[j]==0){
          flag++;
          used[j]++;
        }
      }
  }
}
if (flag==n1 )
printf("the strings are anagrams of each other \n");
else 
printf("the strings are not anagrams of each other \n");
return 0;

}