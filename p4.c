#include<stdio.h>

int main(){
    int a = 3, b= -1, c=8;
    b++;
    printf("%d %d %d \n", a,b,c);

    c= a--;
    printf("%d %d %d \n", a,b,c);

    c = a-- + --a;
    printf("%d %d %d \n", a,b,c);
}