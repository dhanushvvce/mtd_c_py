#include<stdio.h>
#include<math.h>

int main(){

    int averegescore = 0;
    puts("enter the score of the student to print the result");
    scanf("%d", &averegescore);
    if(averegescore >= 0 && averegescore <= 49)
    puts("result is fail");
    else if(averegescore >= 50 && averegescore <= 70)
    puts("result is second class");
    else if(averegescore >= 71 && averegescore <= 90)
    puts("result is first class");
    else if(averegescore >= 91 && averegescore <= 100)
    puts("result is distinction");

    else
    puts("invalid score");

     return 0;
}