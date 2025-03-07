#include <stdio.h>

int main() {
    int n = 0;
    puts("Enter the value of n: ");
    scanf("%d", &n);


    for (unsigned short int i = 1; i <= 20; i++) {
        printf("%d x %2d = %3d\n", n, i, n * i);
    }

    return 0;
}