//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include<stdio.h>
#include<string.h>

int main(){
  int n;
  int last=0;
  char str[100];
  printf("Enter the string :\n");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  n=strlen(str);
  for(int i=0; i<n; i++){
    if (str[i]==' ')
    last=i;
  }
  for (int j=0; j<n ;j++){
    if(j==0){
    printf("%c.",str[j]);
    }
  else if(str[j]==' ' && j!= last){
    printf("%c.",str[j+1]);
  }
    else if (j==last){
    printf(" ");
      for (int k=last+1; k<n; k++){
        printf("%c" , str[k]);
      
    }
  
  }
  

  }
  return 0;
}
