/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int x , y , tot;
  printf("enter your 1st marks :");
  scanf("%d",&x);
  printf("enter your 2nd marks :");
  scanf("%d",&y);
  tot = x + y;
  printf("your marks is :%d",tot);
  
  return 0;
}

