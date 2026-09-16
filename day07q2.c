//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include<stdio.h>
int main()
{
    char letter;
    printf(" Enter the letter ");
    scanf(" %c", &letter);
    if (letter=='a' || letter =='e' || letter =='i' || letter == 'o' || letter=='u' || letter=='A' || letter =='E' || letter =='I' || letter == 'O' || letter=='U')
{
    printf(" the letter is vowel");

    
}
else{
    printf(" the letter is a constonant ");
}
return 0;
}