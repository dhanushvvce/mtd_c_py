#include <stdio.h>
#include <math.h>

int main() {
    int inputnum = 0;

   puts("enter a number to check if it's a perfect square");
   scanf("%d", &inputnum);
   int root = floor(sqrt(inputnum));
   if(root * root == inputnum)
   printf("it's a perfect square");

   else
   printf("it's not a perfect");

   return 0;

}
