//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
#include<math.h>
int main()
{
    float sp , cp;
    float profit, loss;
    printf(" Enter the cost price and selling price\n");
    scanf( " %f %f ", &sp , &cp);
    if (sp>cp)
    {
        int p = sp-cp;
        profit= (p/cp)*100;
        printf(" the profit percentage is \n%f", profit);

    }
    else if (sp<cp)
    {
         int l =cp-sp;
    loss = (l/cp)*100;
    printf(" the loss percentage is \n%f", loss);
    }
  else {
    printf(" break even");

  }
  return 0;
}