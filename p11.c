#include <stdio.h>
#include <limits.h>

int main() {
    int inputNumber;
    int smallest = 10; 
    int secondsmallest = 10;

    puts("Enter a number: ");
    scanf("%d", &inputNumber);

 
   
    while (inputNumber != 0) {
        int digit = inputNumber% 10;
        if (digit < smallest) {
            secondsmallest = smallest;
            smallest = digit;
        } else if (digit < secondsmallest && digit != smallest) {
            secondsmallest = digit;
        }
        inputNumber/= 10;
    }

    if (secondsmallest == 10) {
        printf("The number does not have a second smallest digit.\n");
    } else {
        printf("The second smallest digit is: %d\n", secondsmallest);
    }

    return 0;
}