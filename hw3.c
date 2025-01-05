#include <stdio.h>
#include <limits.h> // For INT_MAX (optional, for initialization)

int main() {
    int num1, num2, num3;
    int smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Method 1: Using nested ternary operators (no if-else)
    smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    printf("Smallest number (ternary): %d\n", smallest);

    // Method 2: Using if-else statements (more readable for complex cases)
    smallest = num1; // Initialize smallest with the first number
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    printf("Smallest number (if-else): %d\n", smallest);

    // Method 3: Using array and loop (useful for more than 3 numbers)
    int numbers[3] = {num1, num2, num3};
    smallest = numbers[0];
    for (int i = 1; i < 3; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Smallest number (array and loop): %d\n", smallest);

    return 0;
}