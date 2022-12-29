#include <stdio.h>
#include<conio.h>
void main() {
    //variable declaration
   int n, coef = 1, space, i, j;
   char c;
   
   //input character
   printf("enter any single character in capital letter only");
   scanf("%c",&c);
   
   //check character validation
   if(c>='A' && c<='Z')
       {
        //input total num of rwos
       printf("Enter the number of rows: ");
       scanf("%d", &n);
       
       //check rows num validation
       if(n>1 && n<10)
       {
                //logic for printing triangle pattern
               for (i = 0; i < n; i++) {
                  for (space = 1; space <= n - i; space++)
                     printf("  ");
                  for (j = 0; j <= i; j++) {
                     
                     printf("%4c", c);
                  }
                  printf("\n");
               }
       }
       else
        printf("pls enter number between 1 to 10 only");
    
   }
   else
        printf("Please enter proper capital letter between A to Z only");
getch();
}
